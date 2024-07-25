#include <stdio.h>

int main(){
	int i,j;
	int n;
	printf("satir sayisini giriniz \n");
	scanf("%d",&n);
	
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(j%2==0){
				printf("*");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
//program 11.21
//153
