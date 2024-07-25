#include <stdio.h>
void floyd(int n){
	int i=1;
	int j;
	int a=1;
	while(i<=can){
		j=1;
		while(j<=i){
			printf("%3d",a);
			a++;
			j++;
		}
		printf("\n");
		i++;
	}
}
int main(void){
	int satir;
	printf("floyd ucgeni icin satir sayisini giriniz\n");
	scanf("%d",&satir);
	floyd(satir);
	return 0;
}
//udemy sayfa 93
//udemy38.c
//122
//floyd ücgenini fonksiyon kullanarak yaz
