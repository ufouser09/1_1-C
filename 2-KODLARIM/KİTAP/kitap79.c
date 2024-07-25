#include <stdio.h>

int main(){
	int n;
	int c;
	int sonraki;
	int ilk=0;
	int ikinci=1;
	printf("kac terim istiyorsunuz:");
	scanf("%d",&n);
	
	printf("fibonacci serisinin ilk %d terimi\n",n);
	
	for(c=1;c<=n;c++){
		
		if(c<=1){
			sonraki=c;
		}
		else{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
			
		}
		printf("%d \n",sonraki);
	}
}
//program 10.16
//117
//bu programa bi da bak
//bu programýn mantigini sor
