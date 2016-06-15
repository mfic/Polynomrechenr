#include <stdio.h>
#include <math.h>

int berechnung(int wahl, float k[]){

    /* Variablendeklaration */
    int von=0, bis=0;
    double sw=0, x=0, pol=0, stm=0, abl=0;
    FILE *datout;
    char buffer[100];

    printf("\np(x) = %.2lfx^5 + %.2lfx^4 + %.2lfx^3 + %.2lfx^2 + %.2lfx + %.2lf\n", k[5], k[4], k[3], k[2], k[1], k[0]);

    if (wahl == 2)
    {

        printf("\nP(x) = %.2lfx^6 + %.2lfx^5 + %.2lfx^4 + %.2lfx^3 + %.2lfx^2 + %.2lfx\n", k[6]/6, k[5]/5, k[4]/4, k[3]/3, k[2]/2, k[1], k[0]);

    } else {
        printf("\np'(x) = %.2lfx^4 + %.2lfx^3 + %.2lfx^2 + %.2lfx + %.2lf\n", k[6]*5, k[5]*4, k[4]*3, k[3]*2, k[2], k[1]);
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
        printf("Datei konnte nicht ge�ffnet werden.\n");
    }

    for(x = 0; x < 51; x += sw)
    {
        pol = k[5]*pow(x,5) + k[4]*pow(x,4) + k[3]*pow(x,3) + k[2]*pow(x,2) + k[1]*x + k[0];


        if (wahl == 2)
        {
           //Berechnung stm
            stm = k[5]/6*pow(x,6) + k[4]/5*pow(x,5) + k[3]/4*pow(x,4) + k[2]/3*pow(x,3) + k[1]/2*pow(x,2) + k[0]*x;
            //Eingabe Datei x, pol, stm
            fprintf(datout, "%lf, %lf, %lf\n", x, pol, stm);

         } else {
            // Berechnung abl
            abl = k[5]*5*pow(x,4) + k[4]*4*pow(x,3) + k[3]*3*pow(x,2) + k[2]*2*x + k[1];
            // Eingabe Datei x, pol, abl
                fprintf(datout, "%lf, %lf, %lf\n", x, pol, abl);
                }
    }
    fclose(datout);
return 0;
}
