#include<stdio.h>
#include<math.h>

int basamak(int n) {
	int b = 0;
	while(n != 0) {
		b++;
		n/=10;
	}
	return b;
}

int main() {
	int n;
	printf("ogrenci no giriniz:\n");
	scanf("%d", &n);
	int b = basamak(n);
	int yil = 2000 + n/pow(10, b-2);
	printf("giris yili = %d", yil);
    return 0;
}



