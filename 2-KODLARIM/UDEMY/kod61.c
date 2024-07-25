#include <stdio.h>
int main(){
	char can[100];
	char canan[100];
	int a;
	printf("lutfen bir yazi giriniz \n");
	gets(can);
	
	printf("lutfen bir yazi daha giriniz \n");
	gets(canan);
	
	printf("birinci yazinin sonuna kac karakter eklemek isterseniz \n ");
	scanf("%d",&a);
	
	printf("eklemeden önce %s",can);
	
	printf("birleþtirmeden sonra \n");
	strncat(can,canan,a);
	
	printf("%s",can);
	return 0;
}
//udemy sayfa 40
//udemy20.21.c
//61
