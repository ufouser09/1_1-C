#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int a;
	printf("not ortalamanýnýzý giriniz\n");
	scanf("%d",&a);
	
	if(a>90)
	printf("puanýnýz %d ise ortalamanýnýz A dýr\n",a);
	else if(a>75)
	printf("puanýnýz %d ise ortalamanýnýz B dir\n",a);
	else if(a>60)
	printf("puanýnýz %d ise ortalamanýnýz C dir\n",a);
	else if(a>50)
	printf("puanýnýz %d ise ortalamanýnýz D dir\n",a);
	else
	printf("puanýnýz %d ise ortalamanýnýz F dir\n",a);
	
	return 0;
}
//program 9.11
//93
//denendi ve compile edildi
