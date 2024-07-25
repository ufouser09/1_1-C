#include <stdio.h>

#define Max(x,y) (((x)>(y)) ? (x):(y))

int main(){
	int a,b;
	printf("lutfen iki sayi giriniz \n");
	scanf("%d%d",&a,&b);
	printf("girdiginiz sayilarin maksimum degeri %d olur.",Max(a,b));
	
	return 0;
	
}
//program 4.2
//32
//denendi ve compile edildi
