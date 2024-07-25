#include<stdio.h>

int main(){
	int n;
	printf("satir sayisini giriniz:\n");
	scanf("%d",&n);
	int i;
	for(i = 1; i <= n; i++) { 
	
		int j;
		for(j = 1; j <= n; j++) { 
			if (i == 1 || i == n ||i + j == n + 1) {
				printf("* ");
			} else {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	
	return 0;
}
