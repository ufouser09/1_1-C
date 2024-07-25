#include <stdio.h>
int main(){
	int a;
	int b;
	printf("lutfen bir deger giriniz \n");
	scanf("%d",&a);
	printf("lutfen bir deger daha giriniz \n");
	scanf("%d",&b);
	
	printf("sayi toplamim=%d",a+b);
	
	return 0;
}
//burda 2 sayıyı toplar eger bolme islemi yapmak istiyorsan int oldugundan kusuratı gostermez eger floatla degistirirse kusuratı gösterir
//eger degistirmek istemiyorsak son satiri degistirerek de kusuratı göstermesini saglayabiliriz
//printf("sayi bolum sonucu=%f",(float)a/b);

//udemy 8.6
//udemy sayfa 9
//17

