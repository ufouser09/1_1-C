#include <stdio.h>
int main(){
	int i,j,N,s,a;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	s=0;
	int A[N];
	printf("binary sayinizi giriniz:\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<N;i++){
		a=A[i];
		for(j=i;j<N-1;j++){
			a=2*a;
		}
		s=s+a;
	}
		
	printf("%d",s);
}
//kod cal�s�yor
//binary bir sayiyi decimal bir sayiya �eviren algoritma ve programi (2 tabanindaki bir sayiyi 10 taban�na �eviren algoritma ve programi)
//sayfa 9

