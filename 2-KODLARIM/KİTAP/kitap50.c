#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL," ");
	int i;
	printf("bugun isi kac derecedir\n");
	scanf("%d",&i);
	
	if(i<10){
		printf("bugun hava soguktur\n");
	}
	else if(i<20){
		printf("bugun hava serindir\n");
	}
	else{
		printf("bugun hava sicaktir\n");
		
	}
	return 0;
}
//program 9.9
//92
//denendi ve compile edildi
