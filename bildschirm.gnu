# Gnuplot Script um auf dem Bildschirm zu plotten
# Terminal bestimmern
set terminal qt
# Titel vergeben
set title "Grafische Darstellung des Polynoms und seiner Ableitung bzw. Stammfunktion"
# Achsen benennen
set xlabel "x-Achse"
set ylabel "y-Achse"
# Plot definieren
plot "Definitionsbereich.dat" using 1:2 title 'Polynom' with lines lt rgb "green", \
     "Definitionsbereich.dat" using 1:3 title 'Berechnetes Polynom' with lines lt rgb "red"
pause -1 "Druecke 'Enter' um fortzufahren"
