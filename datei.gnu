# Gnuplot Script um auf dem Bildschirm zu plotten
set autoscale                          # scale axes automatically
unset log                              # remove any log-scaling
unset label                            # remove any previous labels
set xtic auto                          # set xtics automatically
set ytic auto                          # set ytics automatically
set title "Ihr Polynom"
set xlabel "x-Achse"
set ylabel "y-Achse"
plot "Definitionsbereich.dat" using 1:2 title 'pol' with line , \
     "Definitionsbereich.dat" using 1:3 title 'stm_abl' with linepoints
set output "grafik.ps"
