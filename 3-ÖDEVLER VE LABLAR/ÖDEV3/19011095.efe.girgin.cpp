#include <stdio.h>
#define N 5000
int main(void)
{
 FILE *fp;
 char text[N];
 /********* deðiþken tanýmlarý ************/
 
 int counter=0;
	int i=0;
	int word=0;
 
 
 
 
 
 /********* deðiþken tanýmlarý sonu ************/
 
 // Dosyayý açma
 if ((fp = fopen ("soru.txt", "r")) == NULL) {
 printf("Dosya açma hatasý!");
 return 1;
 }
 // Dosyadan okuma
 fgets(text, N-1, fp);
 // printf("%s\n", text);
 
 /* 
 * text karakter dizisi deðiþkeninde dosyadan okunan metin yer almaktadýr.
 * toplam kelime sayýsýnýn hesabý ve boþluk temizleme iþlemleri -TERCÝHEN-
 * bu dizi üzerinde yapýlmalýdýr. Harici dizi kullanýmý önerilmemektedir. 
 */
 /********* kod bloðu ************/
 
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
 
 
 
 
 
 
 /********* kod bloðu sonu ************/
 // Dosyayý kapama
 fclose(fp);
 return 0;
}

