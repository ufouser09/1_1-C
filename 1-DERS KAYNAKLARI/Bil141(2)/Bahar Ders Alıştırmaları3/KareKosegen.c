#include <stdio.h>

void printSquare(int);
int main() {
	int n;
	printf("kenar uzunlugunu giriniz:\n");
	scanf("%d", &n);
	printSquare(n);

	return 0;
}

void printSquare(int n) {
	int i;
	for (i = 1; i <= n; i++) {
		int j;
		for (j = 1; j <= n; j++) {
			if(i == 1 || i == n || j == 1 || j == n || i == j || i+j == n+1) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

