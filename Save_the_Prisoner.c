#include <stdio.h>
#include <stdlib.h>
int main(){
	
	printf("lutfen kac kere bu iþlemi tekrarlamak istediginiz giriniz\n");
	scanf("%d",&N);
	
	
	
	printf("lutfen seker sayisini giriniz\n");
	scanf("%d",&skr);
	
	printf("lutfen mahkum sayisini giriniz\n");
	scanf("%d",&mhk);
	
	printf("lutfen hangi sandalyeden baslanýcagýný giriniz\n");
	scanf("%d",&snd);
	
	i=0;
	tmp=snd;
	while(i!=skr){
		if(tmp==mhk){
			tmp=0;
		}
		i++;
		tmp++;
		
		
		
	}
	printf("%d",tmp);
}
