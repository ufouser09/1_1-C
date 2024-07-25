#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char ch;
	printf("karne notunuzu giriniz \n");
	ch=getchar();
	switch(toupper(ch)){
		case 'A':
			printf("pekiyi");
			break;
			case 'B':
				printf("iyi");
				break;
				case 'C':
					printf("orta");
					break;
					case'D':
						printf("hmm....");
						break;
						case 'F':
							printf("daha iyisini baþarabilirsin");
							break;
								default:
									printf("basari notunu yanlis girdiniz");
									break;
	}
	
}
//program 9.16
//100
//denendi ve compile edildi
