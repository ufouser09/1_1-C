#include <stdio.h>

void kare(int*sonuc,int*can){

*sonuc=*can**can;
}
int main(void){
	int x=4,karesi;
	int sonucum;
	
	kare(&sonucum,&x);
	printf("%d",sonucum);
	return 0;
}
//udemy sayfa 47
//udemy 20.30.c
//70
//program calýsmadi
