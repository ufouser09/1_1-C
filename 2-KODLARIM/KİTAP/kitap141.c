#include <stdio.h>

int main(){
	int i,n;
	
	printf("100 den kucuk bir tam sayi giriniz \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if((i/10==3)|| (i%10==3)){
			printf("%d \t",i);
		}
	}
	return 0;
}
//program 11.23
//154
