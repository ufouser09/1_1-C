#include <stdio.h>
int main(){
	int i,j,c,m=5;
	for(i=0;i<3;i++){
		c=m/2;
		for(j=0;j<m;j++){
			if(j==c)
			printf("l");
			else
			printf("0");
			
		}
		m=m-2;
		printf("\n");
	}
	return 0;
}
//program 11.9
//146
