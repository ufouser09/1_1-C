#include <stdio.h>

void printArray(int [], int);

int main() {
	int dizi[] = {1,2,3,4};
	
	int n = sizeof(dizi)/sizeof(dizi[0]);
	
	printf("duz dizi:\n");
	printArray(dizi, n);
	
	int i, j, temp;
	
	for (i = 0, j = n - 1; i < j; i++, j--) {
		temp = dizi[i];
		dizi[i] = dizi[j];
		dizi[j] = temp; 
	}
	
	printf("ters dizi:\n");
	printArray(dizi, n);
	
	return 0;
}

void printArray(int d[], int n) {
	int i;
	
	for(i = 0; i < n; i++) {
		printf("%d\n", d[i]);
	}
	
}
