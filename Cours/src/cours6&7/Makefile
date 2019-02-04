CC=gcc
CFLAGS=-Wall -Werror

main: matrice.o main.o
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

matrice.o:matrice.h
main.o:matrice.h
