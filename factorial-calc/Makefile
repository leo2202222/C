all : factorial-calc.o
	gcc factorial-calc.o -o factorial-calc
factorial-calc.o : factorial-calc.c
	gcc -c factorial-calc.c -o factorial-calc.o
clean :
	rm factorial-calc.o factorial-calc