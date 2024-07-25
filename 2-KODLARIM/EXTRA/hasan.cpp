#include <stdio.h>
int main(){
	int i,j,N;
	do{
	
	printf("lutfen satir sayisini giriniz\n");
	scanf("%d",&N);
	
	if(N%2==0){
		printf("LUTFEN TEK SAYÝ GÝRÝNÝZ!\n");
	}
	
	}while(N%2==0);
	
	
	for(i=N/2;i>=0;i--){
		for(j=0;j<N;j++){
			if(j==i || N-j-1==i){
				printf("*");
			}
			else{
				printf("-");
			}
	
		}
		printf("\n");
	}
	for(i=1;i<=N/2;i++){
		for(j=0;j<N;j++){
			if(j==i||N-j-1==i){
				printf("*");
			}
			else{
				printf("-");
			}
		}
		printf("\n");
	}
}
/*lutfen satir sayisini giriniz
7
---*---
--*-*--
-*---*-
*-----*
-*---*-
--*-*--
---*---

--------------------------------
Process exited after 1.478 seconds with return value 0
Press any key to continue . . .


*/
