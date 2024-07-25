#include <stdio.h>
int main(){
	int N,i,j;
	int counter=0;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&N);
	
	for(i=2;i<=N;i++){
		for(j=1;j<=i;j++){
			if(i%j==0){
				counter++;
				
			}
			
		}
		if(counter==2){
				printf("%d\t",i);
			}
		counter=0;
	}
	return 0;
}
/*
lutfen bir sayi giriniz
9
2       3       5       7
--------------------------------
Process exited after 1.328 seconds with return value 0
Press any key to continue . . .

*/
