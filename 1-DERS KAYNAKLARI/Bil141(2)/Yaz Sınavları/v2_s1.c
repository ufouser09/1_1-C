#include<stdio.h>
#include<string.h>

int eksikSayi(int[], int);
int main() {
	int d[] = {4, 6, 3, 1, 2}; 
	
	printf("%d", eksikSayi(d, sizeof(d)/4));
}

int eksikSayi(int d[], int n) {
	int i, diziToplami = 0;
	for (i = 0; i < n; i++) {
		diziToplami += d[i];
	}
	int olmasiGerekenToplam = (n+1) * (n+2) / 2;//formul bilinmiyorsa 1-n+1 toplami ozyineli fonk. ile bulunabilir.
	
	return olmasiGerekenToplam - diziToplami;
}
