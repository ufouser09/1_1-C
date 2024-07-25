#include <stdio.h>
int main(){
	int aci1,aci2,aci3;
	printf("3 tane aci giriniz\n");
	scanf("%d %d %d",&aci1,&aci2,&aci3);
	
	if(aci1+aci2+aci3==180){
		if((aci1==60)&&(aci2==60)&&(aci3==60)){
			printf("bu bir eskenar ucgendir\n");
		}
		else if((aci1==aci2)||(aci1==aci3)||(aci2==aci3)){
			printf("bu bir ikizkenar ucgendir \n");
		}
		else{
			printf("bu bir cesitkenar ucgendir \n");
		}
		}
		else{
			printf("acilar ucgen olusturmaz \n");
		}
		return 0;
}
//udemy sayfa 68
//udemy20.60.c
//100
