#include <stdio.h>
int main(){
	int i=0;
	int sayac=5;
	
	printf("case 1:\n");
	do{
		printf("%d\n",i);
		i++;
	}while(i<sayac);
	printf("case 2:\n");
	i=20;
	do{
		printf("%d\n",i);
		i++;
	}while(0);
	printf("case 3:\n");
	i=0;
	do{
		printf("%d\n",i);
	}while(i++<5);
	
	printf("case 4:\n");
	i=3;
	do{
		printf("%d\n",i);
		i++;
	}while(i<5 && i>=2);
	return 0;
}

//program 11.33
//163
