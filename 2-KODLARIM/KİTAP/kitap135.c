#include <stdio.h>
int main(){
	int i=1,j=1,k;
	do{
		k=5;
		do{
			printf(" ");
			k--;
			
		}while(k>=i);
		j=1;
		do{
			printf("%d%c",i," ");
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
	return 0;
}

//program 11.17
//150
