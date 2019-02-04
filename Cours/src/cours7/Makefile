CC=gcc
CFLAGS=-Wall -Werror
SOURCES=$(wildcard *.c)
OBJ=$(patsubst %.c, %.o, $(SOURCES))

essai_pile: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

pile.o: pile.h
essai_pile.o: pile.h pile_io.h
pile_io.o: pile_io.h pile.h









