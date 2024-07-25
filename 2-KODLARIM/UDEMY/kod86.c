#include <stdio.h>
int main(){
	int limit,i,satir;
	printf("lutfen bir limit degeri giriniz\n");
	scanf("%d",&limit);
	
	i=0;
	satir=0;
	
	while(i<=limit){
		if(i%17==0){
			printf("%5d",i);
			satir++;
			if(satir%10==0){
				printf("\n");
			}
		}
		i++;
	}
	return 0;
}
//udemy sayfa 59
//udemy20.46
//86
