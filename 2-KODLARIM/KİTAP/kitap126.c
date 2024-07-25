#include <stdio.h>

int main(){
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		if(i<3){
			printf(" ");
		}
		for(k=i;k>=1;k--){
			printf("*");
		}
	printf("\n");	
	}
	return 0;
	
}
//program 11.8
//146
