#include <stdio.h>
#include <math.h>
#include "myheader.h"

int getFirstDigit(int); 
int getDigitCount(int); 

int main() {
	
	int n = getIntFromUser();
	int m = n;
	
	int son = n%10;
	int ilk = getFirstDigit(n);
	int b = getDigitCount(n);
	
	m -= ilk*pow(10, b - 1);
	m += ilk;
	m += son*pow(10, b-1);
	m -= son;
	
	printf("original sayi = %d\n", n);
	printf("son durumda = %d\n", m);
	
	int fark = abs(m-n);
	
	printf("sayi son durumda %d ", fark);
	
	if (n > m) {
		printf("azalmistir.");
	} else {
		printf("artmistir.");
	}
	return 0;
}

int getFirstDigit(int x) {
	while(x >= 10) {
		x/=10;
	}
	return x;
}

int getDigitCount(int x) {
	int basamakSayisi = 0;
	while(x != 0) {
		basamakSayisi++;
		x/=10;
	}
	return basamakSayisi;
}

