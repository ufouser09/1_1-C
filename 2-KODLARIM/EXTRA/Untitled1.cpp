#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	
	int krk;
	char op;
	int i;
	int ar;
	do{	
		printf("lutfen ekrana bir sey giriniz\n");
		op=getch();
		printf("girdiginiz karakter =%c\n",op);
		
		op=(int)op;
		ar=4;
		for(i=65;i<90;i++){
			if(i==op){
				ar=1;
				
			}
			
		}
		for(i=48;i<=57;i++){
			if(i==op){
					ar=2;
			}
	
		}
		for(i=97;i<=122;i++){
			if(i==op){
				ar=3;
			}
			
		}
		switch(ar){
			case 1:
				printf("girdiginiz karakter buyuk harftir\n");
				break;
			case 2:
					printf("girdiginiz karakter bir rakamdir\n");
					break;
			case 3:
						printf("girdiginiz karakter kucuk harftir\n");
						break;
			case 4:
							printf("girdiginiz baska bir þeydir\n");
							break;
					
		}
		if(op=='+'){
			krk=1;
		}
		
		
		
		
		
		
		
		
		
		
	
		
	}while(krk !=1);
	printf("PROGRAM SONLANDÝ");
	return 0;
}
