#include <stdio.h>

float celcius_fahrenayt(float);

int main(){
	float c,f;
	printf("celcius dereceyi giriniz \n");
	scanf("%d",&c);
	
	printf("celcius %2f=%2f fahrenayt \n",c,celcius_fahrenayt(c));
	
	return (0);
	
}

float celcius_fahrenayt(float celcius){
	float fahrenayt;
	fahrenayt=(1.8*celcius)+32;
	return fahrenayt;
}
//program 12.12
//188
//programa bi da bak
