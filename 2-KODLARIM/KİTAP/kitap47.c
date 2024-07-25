#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a;
	printf("bir tam sayi giriniz\n");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("%d sayisi cift sayidir\n",a);
		
	}
	else{
		printf("%d sayisi tek sayidir\n",a);
	}
	return 0;
}
//program 9.6
//90
//denendi ve compile edildi

