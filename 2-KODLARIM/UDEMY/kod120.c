#include <stdio.h>
void teksayilar(int n){
	int i=0;
	while(i<=n){
		if(i%2==1){
			printf("%d\n",i);
		}
		i++;
	}
}
int main(void){
	int sayi;
	printf("lutfen pozitif bir tam sayi giriniz\n");
	scanf("%d",&sayi);
	teksayilar(sayi);
	return 0;
}
//udemy sayfa 91
//udemy36.c
//120
//klavyeden girilen pozitif bir n tam sayisina kadar olan tek sayilari ekrana listeleyen c programini fonksiyon kullanarak yazýnýz
