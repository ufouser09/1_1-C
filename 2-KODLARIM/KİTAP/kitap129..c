#include <stdio.h>

int main(){
	int n,i,j;
	printf("lutfen bir sayi giriniz \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
//program 11.11
//147

