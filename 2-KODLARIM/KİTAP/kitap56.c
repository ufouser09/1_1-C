#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char ch;
	ch=getchar();
	switch(ch){
		
		case 'M':
		case 'm':
		printf("birinci konum\n");
		printf("birinci adim \n");
		break;
		
		case 'P':
		case 'p':
		printf("2.konum \n");
		printf("ikinci adim \n");
		break;
		
		case 'R':
		case 'r':
		printf("3.konum\n");
		printf("3.adim\n");
		break;
		
		case 'S':
		case 's':
		printf("4.konum\n");
		printf("4.adim\n");
		break;
		
		case'B':
		case'b':
		printf("5.konum\n");
		printf("5.adim\n");
		
		default:
		printf("hiç adim atilmadi\n");	
	}
}
//program 9.15
//98
//denendi ve compile edildi
