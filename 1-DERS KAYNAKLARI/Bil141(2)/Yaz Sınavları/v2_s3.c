#include<stdio.h>
#include<string.h>

int main() {
	char mesaj[1000];
	printf("ingiliz gemileri bogaza demirlemis...\n");
	gets(mesaj);
	
	char gercekMesaj[50] = "geldikleri gibi giderler";
	int length = strlen(gercekMesaj);
	int i = 0;
	int count = 0;
	while(mesaj[i] != '\0') {
		if (mesaj[i] != gercekMesaj[i%length]) {
			count++;
		}
		i++;
	}
	printf("%d", count);
}

