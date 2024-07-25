#include <stdio.h>
int main(){
	int i=0,k=0;
	float j=0;
	int sayac=5;
	
	printf("Case 1:\n");
	for(i=0;i<sayac;i++){
		printf("%d\n",i);
	}
	printf("Case 2:\n");
	for(j=5.5;j>0;j--){
		printf("%f\n",j);
	}
	printf("Case 3:\n");
	for(i=2;(i<5&&i>=2);i++){
		printf("%d\n",i);
	}
	printf("Case 4:\n");
	for(i=0;(i!=5);i++){
		printf("%d\n",i);
	}
	printf("Case 5:\n");
	for(i=0;i<sayac;i++);
	
	printf("Case 6:\n");
	for(i=0,k=0;(i<5&&k<3);i++,k++){
		printf("%d\n",i);
	}
	printf("Case 7:\n");
	i=5;
	for(;0;i++){
		printf("%d\n",i);
	}
	return 0;
}
//program 11.28
//159
