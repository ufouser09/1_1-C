#include <stdio.h>

int main(){
	int i,j,n;
	printf("satir sayisini giriniz \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
//program 11.22
//153
//bu programa bi da bak
