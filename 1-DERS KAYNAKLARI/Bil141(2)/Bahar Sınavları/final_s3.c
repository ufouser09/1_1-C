#include <stdio.h>

int asal(int n);

int main() {
    int n, i, flag = 0;
    printf("bir tam sayi giriniz: ");
    scanf("%d", &n);
    for (i = 2; i <= n/2; i++) {
        if (asal(i) && asal(n-i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            flag = 1;
        }
    }
    if (flag == 0) {
    	printf("%d sayisi 2 asal sayinin toplami ile elde edilemez.", n);
	}
    return 0;
}

int asal(int n) {
    int i;
    for (i = 2; i <= n/2; i++) {
    	if (n%i == 0)
        	return 0;
    }
    return 1;
}
