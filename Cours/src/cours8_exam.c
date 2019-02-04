#include <stdio.h>
#include <string.h>


void my_gets(int *str)
{
	printf("%zu \n", sizeof(str));
	//fgets(str, 50, stdin);
}

int main()
{
	int str[50];

	my_gets(str);
	
	//printf("input : %s \n", str);

	return 0;
}
