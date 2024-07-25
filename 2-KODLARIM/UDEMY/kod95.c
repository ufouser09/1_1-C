#include <stdio.h>
int main(){
	int n;
	printf("bir sayi giriniz \n");
	scanf("%d",&n);
	
	if((n%13==0)&&(n%17==0)){
		printf("sayimiz 13 ve 17 ye bolunuyor \n");
	}
	else if(n%13==0){
		printf("sayimiz 13 e bolunuyor \n");
	}
	else if(n%17==0){
		printf("sayimiz 17 ye bolunuyor \n");
	}
	else
	{
		printf("sayimiz 13 ve 17 ye bolunuyor\n");
	}
	return 0;
}
//udemy sayfa 65
//udemy20.55.c
//95
