#include <stdio.h>
void fibonacci(int n){
	int ilk=0;
	int ikinci=1;
	int sonraki;
	int i;
	printf("uretilecek fibonacci sayilari:\n");
	
	for(i=0;i<=n;i++){
		if(i<=1){
			sonraki=i;
		}
		else{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
		}
		printf("%d\n",sonraki);
	}
}
int main(void){
	int sayi;
	printf("kac adet fibonacci sayi uretilecek\n");
	scanf("%d",&sayi);
	fibonacci(sayi);
	return 0;
}
//udemy sayfa 92
//udemy37.c
//121
//her sayinin kendinden �nceki sayi ile toplanamasi sonucu olusan sayi dizisine fibonacci sayi dizisi denir.buna g�re klavyeden kac adet fibonacci sayi uretilecegini bilgisi girilerek sayilarin �retilmesini saglayan c programini kullanarak yaz�n�z
