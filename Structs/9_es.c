#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int saat;
	int dakika;
	int saniye;
}SaatCevirme;
int main(){
	SaatCevirme timed;
	int num;
	int count=0;
	int count1=0;
	int count2=0;
	printf("Please enter a number : ");
	scanf("%d",&num);
    timed.saat=num/3600;
    timed.dakika=(num%3600)/60; 
	timed.saniye=(num%3600)%60;
	printf("%d hour %d min %d sec.\n",timed.saat,timed.dakika,timed.saniye);
	return 0;
}