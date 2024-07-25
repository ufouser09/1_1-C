#include <stdio.h>
long factorial(int);

int main(){
	int i,n,c;
	
	printf("pascal ucgenlerinin kac satiri yazilsin?\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(c=0;c<=(n-i-2);c++)
		printf(" ");
		
		for(c=0;c<=i;c++)
		printf("%ld",factorial(i)/(factorial(c)*factorial(i-c)));
		
		printf("\n");
		
	}
	return 0;
}
long factorial(int n){
	int c;
	long sonuc=1;
	
	for(c=1;c<=n;c++)
	sonuc=sonuc*c;
	
	return sonuc;
}
//program 11.25
//155
