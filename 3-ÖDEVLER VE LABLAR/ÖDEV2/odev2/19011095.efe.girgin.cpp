#include <stdio.h>
#define N 5000
int main(void)
{
 FILE *fp;
 char text[N];
 /********* de�i�ken tan�mlar� ************/
 
 int counter=0;
	int i=0;
	int word=0;
 
 
 
 
 
 /********* de�i�ken tan�mlar� sonu ************/
 
 // Dosyay� a�ma
 if ((fp = fopen ("soru.txt", "r")) == NULL) {
 printf("Dosya a�ma hatas�!");
 return 1;
 }
 // Dosyadan okuma
 fgets(text, N-1, fp);
 // printf("%s\n", text);
 
 /* 
 * text karakter dizisi de�i�keninde dosyadan okunan metin yer almaktad�r.
 * toplam kelime say�s�n�n hesab� ve bo�luk temizleme i�lemleri -TERC�HEN-
 * bu dizi �zerinde yap�lmal�d�r. Harici dizi kullan�m� �nerilmemektedir. 
 */
 /********* kod blo�u ************/
 
 while(text[i]!='\0'){
		
		if(text[i]==32 && counter ==0){
		word++;
		printf("%c",text[i]);
		counter++;
		}
		else if((text[i]> (int)'A' && text[i]<(int)'Z')  || (text[i]>(int)'a'&&text[i]<(int)'z')  ){
			printf("%c",text[i]);
			counter=0;
		}
		i++;
	}
	printf("\nkelime sayisi=%d\n",word+1);
 
 
 
 
 
 
 /********* kod blo�u sonu ************/
 // Dosyay� kapama
 fclose(fp);
 return 0;
}

