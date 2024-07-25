#include <stdio.h>
int main(){
	int i,j,k=0;
	for(i=1;i<=4;i++){
		for(j=1;j<=i+k;j++){
			if(j%2==0){
				printf("A");
			}
			else{
				printf("*");
			}
			printf("\n");
		}
	}
}
//bu kodda bir sorun var
//program 11.40
//167
