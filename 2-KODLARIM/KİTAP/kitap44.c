#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL," ");
	int x,y;
	printf("lutfen iki sayi giriniz=\n");
	printf("giriste sayilar arasinda en az bir bosluk birakiniz\n");
	printf("ya da direk entere basiniz\n");
	
	scanf("%d %d",&x,&y);
	
	if(x<y)
		printf("%d sayisi %d sayisindan kucuktur");
		
	
	if(x>y)
		printf("%d sayisi %d sayisindan buyuktur");
	
	if(x==y)
		printf("%d sayisi %d sayisina eþittir");
	
	return 0;
	
}
//program 9.4
//86
//programda sorun cýktý
