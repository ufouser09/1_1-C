#include <stdio.h>
int main(){
	int i,j,k=65,l;
	for(i=5;i>0;i--){
		for(l=5;l>i;l--){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("%c",k+j);
		}
		for(j=0;j<i;j++){
			printf("%c",k-j+i-l);
		}
		printf("\n");
	}
	return 0;
}



//bu kodda bir sorun var
//program 11.41
//168
