#include <stdio.h>
int main(){
	int i=0,k=0,sayac;
	float j=0;
	
	printf("seciniz:1,2,3,4,5,6,7>");
	scanf("%d",&sayac);
	
	switch(sayac){
		case 1:
			for(i=0;i<sayac;i++){
				printf("%d\n",i);
			}
			case 2:
				for(j=5.5;j>0;j--){
					printf("%d\n",j);
				}
				case 3:
					for(i=2;(i<5&&i>=2);i++){
						printf("%d\n",i);
					}
					case 4:
						for(i=0;(i!=5);i++){
							printf("%d\n",i);
						}
						case 5:
							for(i=0;i<sayac;i++);
							
							case 6:
								for(i=0,k=0;(i<5&&k<3);i++,k++){
									printf("%d\n",i);
								}
								case 7:
									i=5;
									for(;0;i++){
										printf("%d\n",i);
									}
	}
	return 0;
}
//program 11.29
//160
