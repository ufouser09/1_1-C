#include <stdio.h>

int main()
{
	int i=1,j=1;
	while(i<=2){
		while(j<=10){
			printf("%d * %d=%d\n",i,j,(i*j));
			j++;
		}
		i++;
		printf(" ");
		printf(" ");
	}
	return 0;
}
//program 11.16
//150
