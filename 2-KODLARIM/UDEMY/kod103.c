#include <stdio.h>
int main(){
	char ch;
	int sira;
	printf("bir karakter giriniz \n");
	scanf("%c",&ch);
	if((ch>='A')&&(ch<='z')){
		sira=(int)ch-(int)'A+1;'
	}
	else if((ch>='a')&&(ch<='z')){
		sira=(int)ch-(int)'a'+1;
	}
	else{
		printf("lutfen harf giriniz.boyle bir harf yoktur");
	}
	printf("%c:%d.harftir",ch,sira);
	return 0;
}
//udemy sayfa 71
//udemy20.63.c
//103
