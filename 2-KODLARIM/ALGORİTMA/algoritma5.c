#include <stdio.h>
int main(){
	//degiskenleri tan�mla
	int a,b,c;
	//kullan�c�dan a sayisini al 
	printf("lutfen a sayisini giriniz \n");
	scanf("%d",&a);
	//kullan�c�dan b sayisini al
	printf("lutfen b sayisini giriniz \n");
	scanf("%d",&b);
	
	//ikisi de 50 den b�y�kse topla
	if(a>50 && b>50){
		c=a+b;
		printf("%d",c);
	}
	else{
		printf("hicbir islem yapilmadi");
	}
}
//denendi ve compile yapildi
//a ve b sayilari 50 den buyukse c=a+b i�lemini yapan algoritma ve program�
//sayfa 2
//kod cal�s�yor
