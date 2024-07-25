#include <stdio.h>
#include <stdlib.h>

int x,y,max;

int maximum(){
	if(x>=y)
	max=x;
	else
	max=y;
	return max;
}
int main(){
	x=printf("ilk sayiyi giriniz   :");
	scanf("%d",&x);
	y=printf("ikinci sayiyi giriniz :");
	scanf("%d",&y);
	max=maximum(x,y);
	printf("%d ile %d sayilarinin maximum: %d",x,y,max);
}
//program 12.23
//197
