#include <stdio.h>
#include <stdlib.h>

/* Funktionsdeklaration */

int berechnung(int wahl, double k[]);
void grafik(void);

int main(void)
{

    /* Variablendeklaration */
    double k[6] = {0};
    int wahl = 0, i = 0;
    char buffer[100];

    system("clear");
    printf("##################################################\n");
    printf("#Programm zur Polynomberechnung                  #\n");
    printf("##################################################\n");


    do
    {
        // Anzeige des Menues
        printf("1. Polynom-Koeffitienten eingeben\n");
        printf("2. Stammfunktionberechnen und anzeigen\n");
        printf("3. Ableitung berechnen und anzeigen \n");
        printf("4. Programm beenden\n");
        printf("\nBitte treffen Sie Ihre Wahl\n");

        // Einlesen der Menueauswahl
        fgets(buffer, 100, stdin);
        sscanf(buffer, "%i", &wahl);
        
        switch(wahl)
        {
            // Auswahl Menuepunkt 1
            case 1:

                printf("Bitte geben Sie die Koeffitienten nacheinander ein.\n");
                printf("- Der Grad des Polynoms darf hoechstens 5 sein\n");
                printf("- Die Form des Polynoms ist p(x) = ax^5 + bx^4 + cx^3 + dx^2 + ex + f\n");
                printf("- Sind Koeffitienten gleich Null, 'Enter' drücken\n\n");

                // Schleife zur Eingabe der Koeffitienten
                for(i = 5; i >= 0; i--)
                {
                    printf("Koeffitient vor x^%i:  ", i);
                    fgets(buffer, 100, stdin);
                    sscanf(buffer, "%lf", &k[i]);
                }

                // Anzeige des Polynoms
                printf("\np(x) = %.2lfx^5 + %.2lfx^4 + %.2lfx^3 + %.2lfx^2 + %.2lfx + %.2lf\n\n", k[5], k[4], k[3], k[2], k[1], k[0]);
                break;

            case 2:
                // Unterprogramm berechnung aufrufen
                berechnung(wahl, k);
                grafik();
                break;

            case 3:
                // Unterprogramm berechnung aufrufen
                berechnung(wahl, k);
                grafik();
                break;

            case 4:
                printf("Auf Wiedersehn!\n");
                break;

            default:
                printf("Fehler: Bitte geben Sie eine Zahl zwischen 1 und 4 ein.\n\n");
                break;
        }


    } while (wahl != 4);

    return 0;
}
