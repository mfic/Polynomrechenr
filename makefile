CC = gcc
OBJ = main.o berechnung.o grafik.o
FLAGS = -Wall

polynomrechner: $(OBJ)
	$(CC) -o polynomrechner $(OBJ)

main.o: main.c
	$(CC) -c $(FLAGS) main.c

berechnung.o: berechnung.c
	$(CC) -c $(FLAGS) berechnung.c

grafik.o: grafik.c
	$(CC) -c $(FLAGS) grafik.c

clean:
	-rm -f *.o
