#include <stdio.h>
int main(){
	int N,M,j,i,S;
	printf("lutfen siniftaki kisi sayisini giriniz:\n");
	scanf("%d",&N);
	
	
	int A[N][5];
	int C[8];
	for(i=0;i<8;i++){
		C[i]=0;
		
	}
	for(i=0;i<N;i++){
		for(j=0;j<5;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<5;j++){
		C[A[i][j]-1]++;
		}
	}
	for(i=0;i<8;i++){
		printf("%d. ders= %d\n",i+1,C[i]);
	}
	return 0;
	
}
//kod cal�s�yor
//40 ki�ilik bir sinifta �gernciler kredilerini doldurabilmek i�in 5 ders almak zorudad�rlar.bu dersler 8 ayri ders arasindan secilebilmektedir.dersler 1 ile 8 aras�nda numaralandirilmistir.bu sinifin sectigi dersler 40x5 lik bir matris olarak bilgisayara girilecegine g�re her dersin kac ogrenci tarafindan al�nd�g�n� bulan algoritma ve programi
//sayfa 43
//1.soru 
