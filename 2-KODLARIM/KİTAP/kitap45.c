#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL," ");
	int gun;
	printf("haftanin kacinci gunundesiniz\n");
	scanf("%d",&gun);
	
	if(gun==1)
	printf("bugun pazartesidir\n");
	if(gun==2)
	printf("bugun salidir\n");
	if(gun==3)
	printf("bugun carsambadýr\n");
	if(gun==4)
	printf("bugun persembedir\n");
	if(gun==5)
	printf("bugun cumadýr");
	if(gun==6)
	printf("bugun cumartesidir");
	if(gun==7)
	printf("bugun pazardir");
	
	return 0;
}
//program 9.1
//87
//denendi ve compile edildi
