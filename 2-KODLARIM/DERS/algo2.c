#include <stdio.h>
#include <math.h>
//�cgen cesidini bulma 
int main(void){
	int a,b,c;
	printf("please enter first dimension of the triangle:");
	scanf("%d",&a);
	
	printf("please enter second dimension of the triangle");
	scanf("%d",&b);
	
	scanf("please enter third dimension of the triangle");
	scanf("%d",&c);
	
	if(a==b){
		if(b==c){
			printf("e�kenar ucgen \n");	
		}
		else{
			printf("ikiszkenar ucgen\n");
		}
	}
	else{	
		if(b==c){
			printf("ikizkenar ucgen \n");
		}
		else if(a==c){
			printf("ikizkenar ucgen \n");
		}
		else{
			printf("cesitkenar ucgen \n");
		}
	}
		
		
	
	
	return 0;
}

//anlas�ld�
//deneme ve compile yapildi
