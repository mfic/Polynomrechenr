#include <stdio.h>
#include <stdlib.h>

void grafik (void){

    /* Variablendeklaratiion */
    int ausgabe = 0;
    char buffer[100];

    do
    {
        // Menue ausgeben
        printf ("Moechten Sie die Ausgabe:\n");
        printf ("1. auf dem Bildschirm\n");
        printf ("2. in eine .ps-Datei\n");

       // Einlesen der Menueauswahl
       fgets (buffer, 100, stdin);
       sscanf (buffer, "%i", &ausgabe);

        switch (ausgabe)
        {
            // Ausgabe des Graphen auf dem Bildschirm
            case 1:
                system ("gnuplot bildschirm.gnu");
                break;
            // Ausgabe des Graphen in einer Datei
            case 2:
                system ("gnuplot datei.gnu");
                system ("clear");
                printf ("\n\nDie Datei wurde unter grafik.ps gespeichert\n\n");
                break;
            // Fehler
            default:
                printf ("Fehler, bitte neue Eingabe.\n");
                break;
        }
    } while (!(ausgabe == 1 || ausgabe == 2));
}
