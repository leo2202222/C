all : age-calc.o
	gcc age-calc.o -o age-calc

age-calc.o : age-calc.c
	gcc -c age-calc.c -o age-calc.o

clean :
	rm *.o age-calc