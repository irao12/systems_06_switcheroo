all: switcheroo.o
		gcc -o switcheroo switcheroo.o

switcheroo.o: switcheroo.c
		gcc -c switcheroo.c

clean:
		rm *.o

run:
		./switcheroo
