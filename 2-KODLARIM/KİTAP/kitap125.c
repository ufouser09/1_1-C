#include <stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		if(i<=4)
			printf("");
		
		
		for(k=i;k>=1;k--){
			if(k<5)
				printf("%d",k);
			
		}
	printf("\n");
	}
	return 0;
}
//program 11.7
//145
//bu programa bi da bak
