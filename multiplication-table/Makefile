all : multiplication-table.o
	gcc multiplication-table.o -o multiplication-table
multiplication-table.o : multiplication-table.c
	gcc -c multiplication-table.c -o multiplication-table.o
clean :
	rm multiplication-table.o multiplication-table