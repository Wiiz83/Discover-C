bitabit: bitabit.o bit_operations.o
	gcc -o bitabit bitabit.o bit_operations.o

bitabit.o: bitabit.c bit_operations.h
	gcc -Wall -Werror -c bitabit.c

bit_operations.o: bit_operations.c bit_operations.h
	gcc -Wall -Werror -c bit_operations.c


bfile.o: bfile.c bfile.h
	gcc -Wall -Werror -c bfile.c


##bfile.o: bit_operations.c bit_operations.h
##	gcc -Wall -Werror -c bitabit.c

