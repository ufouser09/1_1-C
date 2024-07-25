#include <stdio.h>
#include <string.h>

int topla(int);
int faktoriyel(int);
int fibonacci(int);
int topOfArray(int [], int, int);
int main() {
	printf("1 den 5 e kadar sayilarin toplami = %d\n", topla(5));
	
	printf("5! = %d\n", faktoriyel(5));
	
	printf("7. fibonacci sayisi: %d\n", fibonacci(7));
	
	int dizi[] = {1,2,4,6,8,10,15,20, 25,8};
	int length = sizeof(dizi)/sizeof(int) - 1;
	printf("dizinin ust noktasi: %d", topOfArray(dizi, 0, length));
	
	return 0;
}

int topOfArray(int dizi[], int begin, int end) {
	int middle = (begin+end)/2;
	
	if (dizi[middle] > dizi[middle-1] && dizi[middle] > dizi[middle+1])
		return dizi[middle];
	if (dizi[middle] > dizi[middle-1])
		return topOfArray(dizi, middle, end);
	if (dizi[middle] < dizi[middle-1])
		return topOfArray(dizi, 0, middle);
}

int fibonacci(int n) {
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;	
	return fibonacci(n-1) + fibonacci(n-2);
}

int faktoriyel(int n) {
	if (n == 0) {
		return 1;
	}
	return n * faktoriyel(n-1);
}

int topla(int n) {
	if (n == 1)
		return 1;
	return n + topla(n-1);
}

