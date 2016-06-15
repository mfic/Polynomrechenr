#include <stdio.h>
#include <stdlib.h>

void grafik(void){

    /* Variablendeklaratiion */
    int ausgabe=0;
    char buffer[100];

    do
    {
        printf("Möchen Sie die Ausgabe auf dem:\n");
        printf("1. Bildschirm\n");
        printf("2. .ps-Datei\n");
	
	// Einlesen der Menueauswahl
	fgets(buffer, 100, stdin);
	sscanf(buffer, "%i", &ausgabe);	
	
        switch(ausgabe)
        {
            case 1:
                system("gnuplot bildschirm.gnu");
                break;
            case 2:
                system("gnuplot datei.gnu");
                printf("Die Datei wurde unter grafik.ps gespeichert\n");
                break;
            default:
                printf("Fehler, bitte neue Eingabe.\n");
                break;
        }
    } while(!(ausgabe == 1 || ausgabe == 2));
}
