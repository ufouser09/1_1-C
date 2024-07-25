#include <stdio.h>
void yerdegistir(int x,int y){
	int gecici;
	gecici=x;
	x=y;
	y=gecici;
	printf("x:%d y:%d",x,y);
}


int main(void){
	int x,y;
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%d%d",&x,&y);
	printf("x:%d y:%d\n",x,y);
	yerdegistir(x,y);
	
	
	return 0;
	
}
//udemy101.ders
//udemy43.c
//127
//kullanici tarafindan girilen tam sayilar x ve y degiskenlerinde tutulmaktadir.x ve y degiskenlerinde yer alan degerlerin yerlerinin degistirilmesini saglayan fonksiyon prototopi asagida verilmistir.uyun c programini ve fonksiyonunu yaziniz
