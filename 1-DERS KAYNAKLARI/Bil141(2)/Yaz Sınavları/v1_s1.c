#include<stdio.h>

void benzerSayi(int, int);
int main() {
	int s0, s1;
	
	printf("iki sayi giriniz:\n");
	scanf("%d%d", &s0, &s1);
	
	benzerSayi(s0, s1);
	
	return 0;
}

void benzerSayi(int a, int b) {
	int min = a < b ? a : b;
	int i, ortakBolenSayisi = 0;
	for (i = 1; i <= min; i++) {
		if (a%i == 0 && b%i == 0) {
			ortakBolenSayisi++;
		}
	}
	if(ortakBolenSayisi >= 3) {
		printf("benzer sayilar.");
	} else {
		printf("benzemez sayilar.");
	}
}
