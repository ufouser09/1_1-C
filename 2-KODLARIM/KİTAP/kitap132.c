#include <stdio.h>

int main(){
	int harf,kod;
	for(harf='A';harf<='G';harf=harf+1){
		for(kod=1;kod<=7;kod=kod+1){
			printf("%c%d \t",harf,kod);
			
		}
		putchar('\n');//bu ne ögren
	}
	return (0);
	
}
//program 11.14
//149
