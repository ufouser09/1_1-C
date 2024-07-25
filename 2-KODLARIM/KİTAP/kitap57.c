#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int a;
	printf("kacinci ay\n");
	scanf("%d",&a);
	
	switch (a){
			case 1:
			printf("ocak");
			break;
			case 2:
				printf("þubat");
				break;
			case 3:
			printf("mart");
			break;
			case 4:
			printf("nisan");
			break;
			case 5:
			printf("mayis");
			break;
			case 6:
			printf("haziran");
			break;
			case 7:
			printf("temmuz");
			break;
			case 8:
			printf("agustos");
			break;
			case 9:
			printf("eylul");
			break;
			case 10:
			printf("ekim");
			break;
			case 11:
			printf("kasim");
			break;
			case 12:
			printf("aralik");
			break;
			default:
			printf("hiç adim atilmadi \n");
													
						
	}
}
//program 9.2
//99
//denendi ve compile edildi
