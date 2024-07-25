#include <stdio.h>
int main(){
	int sayi,birler_bas,onlar_bas;
	printf("bir sayi giriniz\n");
	scanf("%d",&sayi);
	birler_bas=sayi%10;
	onlar_bas=sayi%100/10;
	printf("birler basamagimiz:%d\n",birler_bas);
	printf("onlar basamagimiz:%d",onlar_bas);
	
	return 0;
}
//udemy sayfa 60
//udemy20.49.c
//89
