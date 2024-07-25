#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	char ch;
	printf("bir tusa basiniz\n");
	scanf("%c",&ch);
	//ch=getchar();
	if(isupper(ch))
	printf("buyuk harf girdiniz\n");
	else if(islower(ch))
	printf("kucuk harf girdiniz\n");
	else if(isdigit(ch))
	printf("rakam girdiniz \n");
	else
	printf("alfasayisal olmayan bir karakter girdiniz\n");
		
	return 0;
	
}
//program 9.12
//94
//denendi ve compile edildi
