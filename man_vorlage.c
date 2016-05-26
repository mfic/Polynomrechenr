#include <stdio.h>                                                              // Header-Datei


int berechnung(int wahl, int k[]);                                              // Prototypen
void grafik(void);


int main(void)                                                                  // Funktion main
{
   int k[6] = {0, 0, 0, 0, 0, 0};                                               // Variablendeklaration
   int wahl, i;
   char buffer[100];
   puts("Programm zur Polynom-Berechnung\n\n");                                 // Überschrift


   do
   {
      puts("Was moechten Sie tun?\n");                                          // Menü neu schreiben
      puts("   (1) Polynom-Koeffizienten eingeben");
      puts("   (2) Stammfunktion berechnen und anzeigen");
      puts("   (3) Ableitung berechnen und anzeigen");
      puts("   (4) Beenden\n\n");
//      do                                                                        // Solange nicht "Beenden gewählt wird"
// Menüwird sonst nicht mehr ausgegeben.
//      {
         fgets(buffer, 100, stdin);                                             // Variable wahl zuweisen
         sscanf(buffer, "%i", &wahl);

         switch(wahl)
         {
            case 1:                                                             // Wenn "1" gedrückt wird:
               puts("Bitte geben Sie die Koeffizienten ein.");
               puts("   - Der Polynomgrad darf hoechstens 5 sein");
               puts("   - Die Form des Polynoms ist p(x) = ax^5 + bx^4 + cx^3 + dx^2 + ex + f");
               puts("   - Sind Koeffizienten gleich Null, 'Enter' druecken");

               for(i=5; i>=0; i--)                                              // Koeffizienten einlesen
               {
                  printf("\nKoeffizient vor x^%i: ", i);
                  fgets (buffer, 100, stdin);
                  sscanf (buffer, "%i", &k[i]);
               }
                                                                                // Polynom zur Kontrolle ausgeben
               printf("\n   p(x) = %ix^5 + %ix^4 + %ix^3 + %ix^2 + %ix + %i\n", k[5], k[4], k[3], k[2], k[1], k[0]);
               break;


            case 2:                                                             // Wenn "2" gedrückt wird:
               berechnung(wahl, k);                                             // Unterprogramme aufrufen
               grafik();
               break;


            case 3:                                                             // Wenn "3" gedrückt wird
               berechnung(wahl, k);                                             // Unterprogramme aufrufen
               grafik();
               break;


            case 4:                                                             // Wenn "4" gedrückt wird
               system("PAUSE");                                                 // Warten auf Taste, danach beenden
               break;




            default:                                                            // sonst: Fehlermeldung
               printf("Fehler, bitte geben Sie eine Zahl zwischen 1 und 4 ein.\n");
         }
//      }
//      while (!(wahl==4));
   }
   while (!(wahl==4));
   return 0;
}


int berechnung(int wahl, int k[])
{


}


void grafik(void)
{


}
