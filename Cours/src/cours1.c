#include <stdio.h>

void func0(int x, int y);
void func1(int* x, int* y);

int main() {
	/*
	int i = 41;
	int *p;
	p = &i;
	*p +=1;
	printf("%d \n", i);
	printf("%d \n", *p);
	*/

	int a = 5;
	int b = 2;
	printf("a = %d, b = %d \n", a, b);
	func1(&a, &b);
	printf("a = %d, b = %d \n", a, b);
	return 0;
}

void func0(int x, int y) {
	int tmp =x;
	x = y;
	y = tmp;
}

void func1(int* x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
