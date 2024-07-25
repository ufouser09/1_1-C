#include <stdio.h>

#define KUP(x) ((x)*(x)*(x))

int main()
{
	int a;
	printf("lutfen bir tam sayi giriniz: \n");
	scanf("%d",&a);
	printf("girdiginiz sayinin kupu=%d olur",KUP(a));
	
	return 0;
	
}
//program 4.4
//33
//denendi ve compile edildi
