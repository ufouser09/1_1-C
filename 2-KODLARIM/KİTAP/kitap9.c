#include <stdio.h>

#define ABS(x) (((x)<0)) ?(-(x)):(x))
int main()
{
	int a;
	printf("bir tam sayi giriniz =\n");
	scanf("%d",&a);
	printf("girdiginiz sayinin mutlak degeri %d dir",ABS(a));
	
	return 0;
	
}
//program 4.3
//33
//denendi ve compile edildi
