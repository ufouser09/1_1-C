#include <stdio.h>
#define PI 3.1415
#define alan(r) PI*(r)*(r)

int main(){
	int yaricap;
	float alan;
	printf("lutfen yaricapi giriniz: \n");
	scanf("%d",&yaricap);
	alan=alan(yaricap);
	printf("alan =%2f",alan);
	return 0;
}
//program 4.1
//31
//denendi ve compile edildi
