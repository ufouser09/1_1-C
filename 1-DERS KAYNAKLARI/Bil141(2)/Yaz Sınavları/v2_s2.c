#include<stdio.h>
#include<string.h>

int hareketSayisi(int, int);
int n, m;
int main() {
	printf("satir sayisi?\n");
	scanf("%d", &n);
	printf("sutun sayisi?\n");
	scanf("%d", &m);
	int x, y;
	printf("tas hangi satirda?\n");
	scanf("%d", &x);
	printf("tas hangi sutunda?\n");
	scanf("%d", &y);
	printf("hareket sayisi = %d", hareketSayisi(x, y));
}

int hareketSayisi(int x, int y) {
	if (x == n-1 || y == m-1) {
		return 0;
	}
	return 1 + hareketSayisi(x+1, y+1);
}
