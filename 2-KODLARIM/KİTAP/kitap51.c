#include <stdio.h>
#include <locale.h>

int main(){
	int i;
	printf("bir sayi giriniz\n");
	scanf("%d",&i);
	
	if(i%3==0)
	printf("%d sayisi 3 e bolunur\n",i);
	else if(i%2==0)
	printf("%d sayisi cift sayidir\n",i);
	else
	printf("%d sayisi tek sayidir fakat 3 e bolunemez\n",i);
	
	return 0;
	
}
//program 9.10
//93
//denendi ve compile edildi
