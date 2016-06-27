# Erstelle Hausaufgabenordner, wenn dieser nicht existiert
mkdir -p ~/Hausaufgaben/Aufgabe_4

# Kopiere Quellcode und make
rsync -avv *.c Makefile *.gnu ~/Hausaufgaben/Aufgabe_4
