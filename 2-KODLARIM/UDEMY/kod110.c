#include <stdio.h>
int main(){
	char cumle[100];
	int i;
	printf("lutfen bir cumle giriniz \n");
	gets(cumle);
	
	for(i=0;cumle[i];i++){
		printf("%c \n",cumle[i]);
	}
	return 0;
}
//udemy sayfa 80
//udemy26.c
//110
//klavyeden girilen bir cumlenin alt alta yazdýrýlmasýný saglayan c programini yazýnýz
