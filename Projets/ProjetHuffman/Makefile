CFLAGS= -g -Wall -Werror
CC=gcc

all: huff_encode huff_decode

huff_encode : huff_encode.o arbrebin.o fap.o bfile.o
	gcc $(CFLAGS) $^ -o $@

huff_decode : huff_decode.o arbrebin.o bfile.o
	gcc $(CFLAGS) $^ -o $@

huff_encode.o: huff_encode.c fap.h arbrebin.h bfile.h

arbrebin.o: arbrebin.c arbrebin.h

bfile.o: bfile.c bfile.h

essai_fap.o: essai_fap.c fap.h arbrebin.h

fap.o: fap.c fap.h arbrebin.h


clean:
	rm -f huff_encode huff_decode *.o
