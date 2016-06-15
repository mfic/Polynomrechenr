CC = gcc
OBJ = main.o berechnung.o grafik.o
FLAGS1 = -Wall
FLAGS2 = -lm

polynomrechner: $(OBJ)
	$(CC) -o polynomrechner $(FLAGS1) $(FLAGS2) $(OBJ)

main.o: main.c
	$(CC) -c $(FLAGS1) main.c

berechnung.o: berechnung.c
	$(CC) -c $(FLAGS1) berechnung.c

grafik.o: grafik.c
	$(CC) -c $(FLAGS1) grafik.c

clean:
	rm -f *.o polynomrechner
