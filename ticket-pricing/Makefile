all : ticket-pricing.o
	gcc ticket-pricing.o -o ticket-pricing

ticket-pricing.o : ticket-pricing.c
	gcc -c ticket-pricing.c -o ticket-pricing.o

clean : 
	rm *.o ticket-pricing