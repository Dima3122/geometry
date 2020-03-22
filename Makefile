geometry: geometry.c
	gcc -Wall -o geometry geometry.c main.c -lm -lgraph
	./geometry
