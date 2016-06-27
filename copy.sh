# Erstelle Hausaufgabenordner, wenn dieser nicht existiert
mkdir -p ~/Hausaufgaben/Aufgabe_04

# Kopiere Quellcode und make
rsync -avv *.c Makefile *.gnu ~/Hausaufgaben/Aufgabe_04
