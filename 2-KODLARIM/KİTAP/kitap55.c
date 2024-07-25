#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int x;
	scanf("%d",x);
	switch(x){
		case 1:
			printf("1.konum\n");
			printf("birinci adim\n");
		case 2:
		printf("ikinci konum\n");
		printf("ikinci adim\n");
		case 3:
		printf("ucuncu konum \n");
		printf("ucuncu adim \n");
		case 4:
		printf("dorduncu konum \n");
		printf("dorduncu adim \n");
		case 5:
		printf("besinci konum \n");
		printf("besinci adim \n");
		default:
		printf("hic adim atilmadi\n");
		
			
	}
	return 0;
	
}
//program 9.14
//97
//program çalýþmadý bir bak
