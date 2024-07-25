#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL," ");
	int i;
	i=1;
	while(i<6){
		printf("%d \n",i);
		i=i+1;
	}
	printf("son");
}
//program 10.1
//108
//denendi ve compile edildi
