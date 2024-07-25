#include <stdio.h>
#include <locale.h>

int g;
void tatil_mi(g){
int	gun =g;
if(gun>0 && gun <6){

printf("bugun is gunu calismalisin \n");
}
else if(gun==6 || gun ==7){

printf("bugun hafta sonu dinlenmelisin \n");
}
}

int main(){
	setlocale(LC_ALL,"");
	int n;
	
	
	printf("haftanin kacinci gunundesiniz\n");
	scanf("%d",&n);
	tatil_mi(n);
	
	return 0;
	
	
}
//program 9.20
//105
////bu programýn mantigini sor
