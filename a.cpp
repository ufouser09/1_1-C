#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define notVisited
#define waiting 2
#define visited 3

struct node{
	char label[15];
	int counter;
	int state;
	struct node *komsular[100];
	struct node *next;
};
struct node*start=NULL;
struct node *last=NULL;
struct node*temp;
void sehirEkle(char sehir[15]){
	struct node*current=(struct node*)malloc(sizeof(struct node));
	current->lab
}
int main(){
	int secim;
	char secimHarf[15];
	
	while(1==1){
		printf("\n 1-)Sehir ekle....");
		printf("\n secim yapin...");
		scanf("%d",&secim);
		
		switch(secim){
			case 1:
				printf("\n Sehrinizin harfini girin...");
				scanf("%s",&sehirHarf);
		}
	}
	return 0;
}
