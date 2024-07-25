#include<stdio.h>
#include<string.h>

int main() {
	int x = 1;
	printf("%X\n", &x);
	int *p;
	p = &x;
	printf("%X\n", p);
	int **p2;
	p2 = &p;
	printf("%X\n", *p2);
}

