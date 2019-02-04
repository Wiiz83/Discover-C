
CFLAGS= -Wall -Werror

test_file: test_file.o file.o
	gcc $(CFLAGS) -o test_file test_file.o file.o

simul_file : simul_file.o file.o
	gcc $(CFLAGS) -o simul_file simul_file.o file.o

file.o : file.c file.h
	gcc $(CFLAGS) -c file.c

simul_file.o : simul_file.c file.h
	gcc $(CFLAGS) -c simul_file.c

test_file.o : test_file.c file.h
	gcc $(CFLAGS) -c test_file.c

clean:
	rm -f simul_file test_file *.o
