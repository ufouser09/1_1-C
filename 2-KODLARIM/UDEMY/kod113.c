#include <stdio.h>
int topla(int can,int canan){
	return can+canan;
}
int main(){
	int sayi1,sayi2;
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	printf("sayilarin toplami %d",topla(sayi1,sayi2));
	return 0;
}
//udemy sayfa 84
//udemy29.c
//113
