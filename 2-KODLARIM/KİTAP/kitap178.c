#include <stdio.h>

void takas(int i,int j){
	printf("once i:%d,j:%d \n",i,j);
	
	int t=i;
	i=j;
	j=t;
	printf("sonra i:%d ,j:%d \n",i,j);
	
}

int main(){
	int t,i=23,j=47;
	printf("once i:%d,j: %d \n",i,j);
	takas(i,j);
	printf("sonra i:%d,j:%d \n",i,j);
	return 0;
}
//190
//programa bi da bak
