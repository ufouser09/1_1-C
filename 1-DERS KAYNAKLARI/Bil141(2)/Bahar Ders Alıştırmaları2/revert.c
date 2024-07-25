#include <stdio.h>

void printArray(int [], int);

int main() {
	int dizi[] = {1,2,3,4};
	
	int n = sizeof(dizi)/sizeof(dizi[0]);
	
	printf("duz dizi:\n");
	printArray(dizi, n);
	
	int ters[n];
	
	int i, j;
	
	for (i = 0, j = n - 1; i < n; i++, j--) {
		ters[i] = dizi[j];
	}
	
	printf("ters dizi:\n");
	printArray(ters, n);
	
	return 0;
}

void printArray(int d[], int n) {
	int i;
	
	for(i = 0; i < n; i++) {
		printf("%d\n", d[i]);
	}
	
}
