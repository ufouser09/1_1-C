#include <stdio.h>
float dortislem(float a,float b,char islem){
	if(islem=='+'){
		return a+b;
	}
	else if(islem=='-'){
}
	return a-b;
	
}
else if(islem=='*'){
	return a*b;
}
else if(islem=='/'){
	return a/b;
}
else{
	printf("yanlis operator girdiniz");
}
}
int main(void){
	int sayi1,sayi2;
	char islem;
	printf("hangi islemi yaptirmak istiyor musunuz(+-/*)\n");
	scanf("%c",&islem);
	printf("lutfen 2 adet sayi girdiniz \n");
	scanf("%d %d",&sayi1,&sayi2);
	printf("islemin sonucu %2f",dortislem(sayi1,sayi2,islem));
	
	return 0;
}
//udemy sayfa 85
//udemy30.c
//114
