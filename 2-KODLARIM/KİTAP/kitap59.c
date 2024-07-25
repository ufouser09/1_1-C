#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int puan;
	printf("puaninizi giriniz=");
	scanf("%d",&puan);
	
	switch(puan / 10){
		case 10:
			printf("notunuz A dir");
			break;
			case 9:
				printf("notunuz -A dir");
				break;
				case 8:
					printf("notunuz B+ dir");
					break;
					case 7:
					printf("notunuz B dir");
					break;
					case 6:
						printf("notunuz B- dir");
						break;
						case 5:
							printf("notunuz C+ dir");
							break;
							case 4:
								printf("notunuz C dir");
								break;
								case 3:
									printf("notunuz C-dir");
									break;
									case 2:
										printf("notunuz D dir");
										break;
										case 1:
											printf("notunuz F dir");
											break;
											default:
												printf("yanlis not girdiniz!");
												break;
											
	}
}
//program 9.17
//101
//denendi ve compile edildi
