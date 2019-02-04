
bitabit : bitabit.o bit_operations.o
	gcc -Wall -Werror -o bitabit bitabit.o bit_operations.o

bit_operations.o: bit_operations.c bit_operations.h 
	gcc -Wall -Werror -c bit_operations.c

bitabit.o : bit_operations.h bitabit.c
	gcc -Wall -Werror -c bitabit.c



#bitabit: bitabit.o bit_operations.o
#	gcc -o bitabit bitabit.o bit_operations.o

#bitabit.o: bitabit.c bit_operations.h
#	gcc -Wall -Werror -c bitabit.c

#bit_operations.o: bit_operations.c bit_operations.h
#	gcc -Wall -Werror -c bit_operations.c


