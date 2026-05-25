all : area-calculator.o
	gcc area-calculator.o -o area-calculator

area-calculator.o : area-calculator.c
	gcc -c area-calculator.c -o area-calculator.o

clean :
	rm *.o area-calculator