#include <header.h>

int main(void){

    /* Variablendeklaration */
    float k[6] = {0, 0, 0, 0, 0, 0};
    int wahl = 0, i = 0;
    char buffer[100];

//    system(clear);
    printf("Programm zur Polynomberechnung\n\n");

    do{
        // Anzeige des Menues
        printf("1. Polynom-Koeffitienten eingeben\n");
        printf("2. Stammfunktionberechnen und anzeigen\n");
        printf("3. Ableitung berechnen und anzeigen \n");
        printf("4. Programm beenden\n");
        printf("\nBitte treffen Sie Ihre Wahl\n");

        // Einlesen der Menueauswahl
        fgets(buffer, 100, stdin);
        sscanf(buffer, "%i", &wahl);

        switch(wahl){
            // Auswahl Menuepunkt 1
            case 1:

                printf("Der Grad des Polynoms darf höchstens 5 sein\n");
                printf("Die Form des Polynoms ist p(x) = ax^5 + bx^4 + cx^3 + dx^2 + ex + f\n");
                printf("Führende Nullen müssen mit angegeben werden p(x) = 2x + 5 = 0x^5 + 0x^4 + 0x^3 + 0x^2 + 2x + 5\n");

                printf("\nBitte geben Sie die Koeffitienten nacheinander ein.\n");
                    // Schleife zur Eingabe der Koeffitienten
                for(i = 5; i >= 0; i--){
                    printf("Geben Sie den Koeffitienten vor x^%i ein\n", i);
                    fgets(buffer, 100, stdin);
                    sscanf(buffer, "%f", &k[i]);
                }

                // Anzeige des Polynoms
                printf("\np(x) = %fx^5 + %fx^4 + %fx^3 + %fx^2 + %fx + %f\n", k[5], k[4], k[3], k[2], k[1], k[0]);

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
                printf("Auf Wiedersehn!");

            default:
                printf("Fehler: Bitte geben Sie eine Zahl zwischen 1 und 4 ein.\n\n");
        }


    } while (wahl != 4);

    return 0;
}
