#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			if(j%2==0)
			printf("A");
			else
			printf("*");
		}
		printf("\n");
	}
}
//denendi ve compile edildi
//kod calýsýyor
//program 11.39
//167
