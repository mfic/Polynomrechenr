# Gnuplot Script um auf dem Bildschirm zu plotten
set autoscale                          # scale axes automatically
unset log                              # remove any log-scaling
unset label                            # remove any previous labels
unset key                              # removes any set keys
unset xtics                            # unset xtics
unset ytics                            # unset ytics
set xtics auto                         # set xtics automatically
set ytics auto                         # set ytics automatically
set title "Ihr Polynom"
set xlabel "x-Achse"
set ylabel "y-Achse"
plot "Definitionsbereich.dat" using 1:2 title 'pol' with line , \
     "Definitionsbereich.dat" using 1:3 title 'stm_abl' with linepoints

set size 1.0, 0.6
set terminal postscript portrait enhanced mono dashed 1w 1 "Helvetica" 14
set output "grafik.ps"
replot
set terminal x11
set size 1,1
