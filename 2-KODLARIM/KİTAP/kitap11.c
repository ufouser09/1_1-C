#include <stdio.h>

#define TAKAS(x,y)   {int yedek=x;x=y;y=yedek;}
int main(){
	int a,b;
	printf("lutfen iki tam sayi giriniz \n");
	scanf("%d%d",&a,&b);
	printf("degisimden onceki a =%d ve b=%d\n",a,b);
	
	TAKAS(a,b);
	printf("degisimden sonraki a=%d ve b=%d \n",a,b);
}
//program 4.5
//34
//denendi ve compile edildi
