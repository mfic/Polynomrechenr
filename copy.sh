# Erstelle Hausaufgabenordner, wenn dieser nicht existiert
mkdir -p ~/Hausaufgabe

# Kopiere Quellcode und make
rsync -avv *.c Makefile *.gnu ~/Hausaufgabe
