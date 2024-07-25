#include <stdio.h>

int us(int taban,int us){
	int i;
	int sonuc=1;
	for(i=1;i<=us;i++){
		sonuc=taban*sonuc;
	}
	return sonuc;
}
int main(void){
	int a,b;
	printf("taban ve us degerlerini giriniz\n");
	scanf("%d%d",&a,&b);
	printf("d ^%d=%d",a,b,us(a,b));
	return 0;
}
//udemy86.ders
//udemy52.c
//136
//klavyden taban ve us degeri girilen a^b seklindeki bir islemin sonucunu fonksiyon kullanarak hesaplayan ve sonucları ekrana listeleyen c programini yaziniz
