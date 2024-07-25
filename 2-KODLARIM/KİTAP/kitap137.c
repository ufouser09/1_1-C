#include <stdio.h>

int main(){
	
	
	int i;
	int j;
	int n;
	printf("satir sayisini giriniz\n");
	scanf("%d",&n);
	
	
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			if(j%2==0){
				printf('A');
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
//program 11.19
//152
