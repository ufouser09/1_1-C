#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 3;
	int carpan = 1;
	
	int *ptr = (int *) calloc(n*carpan, sizeof(int));
	if (ptr == NULL) {
		return 1;
	}
	
	int count = 0, toplam = 0; 
	while(1) {
		printf("%d. sayiyi giriniz:\n", count+1);
		scanf("%d", ptr+count);
		if (*(ptr+count) == -1)
			break;
		toplam += *(ptr+count);
		count++;
		if (count == n*carpan) {
			carpan++;
			ptr = (int*)realloc(ptr, n*carpan);
			if(ptr == NULL)
				return 1;
		}
	}
	printf("toplam = %d", toplam);
	free(ptr);
    return 0;
}



