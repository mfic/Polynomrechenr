#include <stdio.h>
#include <math.h>

int berechnung(int wahl, float k[]){

    /* Variablendeklaration */
    int von, bis;
    float sw, x, stm, abl;
    FILE *datout

 printf("\np(x) = %fx^5 + %fx^4 + %fx^3 + %fx^2 + %fx + %f\n", k[5], k[4], k[3], k[2], k[1], k[0]);

 if (wahl == 2){

    printf("\nP(x) = %f/6x^6 + %f/5x^5 + %f/4x^4 + %f/3x^3 + %f/2x^2 + %fx\n", k[5], k[4], k[3], k[2], k[1], k[0]);

 } else {
     printf("\np'(x) = %f*5x^4 + %f*3x^3 + %f*2x^2 + %fx + %f\n", k[5], k[4], k[3], k[2], k[1]);
    }

    printf("Bitte geben Sie den Definitionsbereich an links (von)\n");

    fgets(buffer, 100, stdin);
    sscanf(buffer, "%i", &von);

    printf("rechts (bis)");

    fgets(buffer, 100, stdin);
    sscanf(buffer, "%i", &bis);

    sw = (bis-von)/50;

    datout = fopen("Defenitionsbereich.dat", "w");
    if (datout == NULL){
        printf("Datei konnte nicht geöffnet werden.\n");
    }

    for(x = 0, x < 51, x += sw){
        pol = k[5]*pow(x,5) + k[4]*pow(x,4) + k[3]*pow(x,3) + k[2]*pow(x,2) + k[1]*x + k[0];


        if (wahl == 2){
           //Berechnung stm
            stm = k[5]/6*pow(x,6) + k[4]/5*pow(x,5) + k[3]/4*pow(x,4) + k[2]/3*pow(x,3) + k[1]/2*pow(x,2) + k[0]x;
            //Eingabe Datei x, pol, stm
            fprintf(datout, "%f, %f, %f\n", x, pol, stm);

         } else {
            // Berechnung abl
            abl = k[5]*5*pow(x,4) + k[4]*4*pow(x,3) + k[3]*3*pow(x,2) + k[2]*2*x + k[1];
            // Eingabe Datei x, pol, abl
                fprintf(datout, "%f, %f, %f\n", x, pol, abl);
            }
    }
    fclose(datout);
}
