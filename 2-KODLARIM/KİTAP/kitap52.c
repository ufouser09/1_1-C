#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int a;
	printf("not ortalaman�n�z� giriniz\n");
	scanf("%d",&a);
	
	if(a>90)
	printf("puan�n�z %d ise ortalaman�n�z A d�r\n",a);
	else if(a>75)
	printf("puan�n�z %d ise ortalaman�n�z B dir\n",a);
	else if(a>60)
	printf("puan�n�z %d ise ortalaman�n�z C dir\n",a);
	else if(a>50)
	printf("puan�n�z %d ise ortalaman�n�z D dir\n",a);
	else
	printf("puan�n�z %d ise ortalaman�n�z F dir\n",a);
	
	return 0;
}
//program 9.11
//93
//denendi ve compile edildi
