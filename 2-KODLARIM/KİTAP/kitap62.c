#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int gun;
	printf("haftanin kacinci gunu \n");
	scanf("%d",&gun);
	
	switch(gun){
		case 1:
			printf("bugun pazartesidir\n");
			break;
			case 2:
				printf("bugun salidir\n");
				break;
				case 3:
					printf("bugun carsambadir\n");
					break;
					case 4:
						printf("bugun persembedir\n");
						break;
						case 5:
							printf("bugun cumadir\n");
							break;
							case 6:
								printf("bugun cumartesidir\n");
								break;
								case 7:
									printf("bugun pazardir \n");
									break;
									default:
										printf("boyle bir gun yok\n");
										break;
										
	}
}
//program 9.3
//104
//denendi ve compile edildi
