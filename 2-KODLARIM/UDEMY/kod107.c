#include <stdio.h>
int main(){
	char cumle[100];
	int i=0;
	int sayac=0;
	
	printf("lutfen bir cumle giriniz \n");
	gets(cumle);
	
	while(cumle){
		if(cumle[i]==32){
			sayac++;
		}
		i++;
	}
	printf("girilen cumledeki kelime sayisi:%d\n",sayac+1);
	return 0;
}
//udemy sayfa 77
//udemy23.c
//107
//klavyeden girilen bir cumledeki kelime sayisini bulan c programini yazin
