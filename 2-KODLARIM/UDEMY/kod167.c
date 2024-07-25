#include <stdio.h>

void terscumle(char *metin,int boy){
	if(boy==0){
		printf("%c",metinboy[boy]);
		terscumle(metin,boy-1);
	}
}
int main(void){
	char cumle[100];
	printf("lutfen bir cumle giriniz\n");
	gets(cumle);
	terscumle(cumle,strlen(cumle)-1);
	return 0;
}
//udemy 188.ders
//udemy83
//167
//klavyeden girilen bir cumlenin terstten okunusunu elde edilmesini saglayan c programini recursive fonksiyon yardýmýyla yaziniz
