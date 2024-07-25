#include <stdio.h>
int main(){
	int i=0;
	int sayac=5,sec;
	printf("seciniz:1,2,3,4,5>");
	scanf("%d",&sec);
	switch(sec){
		case 1:
			do{
				printf("%d\n",i);
				i++;
			}while(i<sayac);
			break;
			
			case 2:
				i=20;
				do{
					printf("%d\n",i);
					i++;
				}while(0);
				break;
				case 3:
					i=0;
					do{
						printf("%d\n",i);
					}while(i++<5);
					break;
					case 4:
						i=3;
						do{
							printf("%d\n",i);
							i++;
						}while(i<5&&i>=2);
						break;
						return 0;
	}
}

//program 11.34
//164

