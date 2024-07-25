#include <stdio.h>
#include <string.h>

int main(void){
	char dizi[100];
	char eleme;
	char *can;
	
	printf("lutfen bir karakter dizisi girin\n");
	gets(dizi);
	printf("karakter dizisinden cikarmak istediginiz karakter nedir:");
	scanf("%c",&eleme);
	
	can=dizi;
	while(*can){
		if(*can==eleme){
			strcpy(can,can+1);
		}
		else{
			can++;
		}
	}
	printf("eleme yapildiktan sonra karakter dizimizin son hali:%s",dizi);
	return 0;
}
//udemy138.ders
//udemy89.c
//173
//kullanicidan bir karakter dizisi girmesini isteyin
//girdiginiz karakter dizisinden istediginiz bir harfin kaldýrýlmasýný isteyin(örnek a)
//istediginiz karakter kaldýrýldýktan sonra dizinin son halini ekrana bastýran bir c programini yaziniz
//örnek program
//bir karakter dizisi giriniz:
//can boz
//kaldýrmak istediginiz karakteri giriniz:c
//karakter dizisinin son hali:"an boz"
