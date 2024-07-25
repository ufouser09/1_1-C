#include <stdio.h>

int main(){
	int n,i,j,temp;
	
	printf("satir sayisini giriniz \n");
	scanf("%d",&n);
	temp=n;
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=temp;j++){
			printf(" ");
			
			temp--;
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
//program 11.1
//156
//bu programa bi da bak
