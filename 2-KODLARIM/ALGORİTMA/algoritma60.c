#include <stdio.h>
int main(){
	int N,i,k;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int S[10];
	int A[N];
	printf("lutfen yaslarini giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++){
		S[i]=0;
	}
	for(i=0;i<N;i++){
		k=((A[i]-1)/10)+1;
		S[k-1]=S[k-1]+1;
	}
	for(i=0;i<10;i++){
		printf("%d.b�lge=%d\n",i+1,S[i]);
	}
	return 0;
}
//kod cal�s�yor
//bir kasabada yaslar� 1....100 aras�nda degisen 400 kisi bulunuyor.bu kisilerin yaslar�n�(1...10,11...21...30,....,91...100)gruplar� 
//olmak �zere bu 10 gruptan birine yerlestiren algoritma ve programi
//sayfa 51
//1.soru

