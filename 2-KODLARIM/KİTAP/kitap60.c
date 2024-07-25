#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL," ");
	int a,b,min;
	
	printf("lutfen 2 tane sayi giriniz:\n");
	scanf("%d %d",&a,&b);
	
	printf("girdiginiz sayilar %d ve %d dir \n",a,b);
	
	min= ((a<b)? a:b);
	
	printf("kucuk olan sayi =%d olur \n",min);
	
	return 0;
	
	
}
//program 9.18
//103
//denendi ve compile edildi
