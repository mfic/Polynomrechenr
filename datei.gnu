# Gnuplot Script um auf dem Bildschirm zu plotten
set autoscale                          # scale axes automatically
unset log                              # remove any log-scaling
unset label                            # remove any previous labels
unset xtics                            # unset xtics
unset ytics                            # unset ytics
set xtics auto                         # set xtics automatically
set ytics auto                         # set ytics automatically
set terminal postscript
set title "Polynomausgabe"
set xlabel "x-Achse"
set ylabel "y-Achse"
set output "grafik.ps"
plot "Definitionsbereich.dat" using 1:2 title 'pol' with lines , \
     "Definitionsbereich.dat" using 1:3 title 'stm/abl' with lines
