#include <stdio.h>

int f(int);


int main() {
	int x = 5;
	f(x);
	printf("main icinde deger=%d\n", x);
	printf("main icinde adres=%d\n", &x);
	return 0;
}


int f(int x) {
	x++;
	printf("fonk. icindeki deger:%d\n", x);
	printf("fonk. icinde adres=%d\n", &x);
	return x;
}





















