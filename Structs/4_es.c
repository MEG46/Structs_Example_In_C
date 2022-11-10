#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Profil{
	char isim[25];
	char soyisim[25];
	int yas;
	char gorev[15];
};
int main(){
	int entered_num,i;
	printf("Please enter a number : ");
	scanf("%d",&entered_num);
	fflush(stdin);
	struct Profil personel;
	struct Profil *fonkPtr;
	fonkPtr=(struct Profil*)malloc(sizeof(struct Profil)*entered_num);
	for(i=0;i<entered_num;i++){
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("\n\n%d. Personal :\n\n",i+1);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Please enter the personal name : ");
	gets(fonkPtr[i].isim);
	fflush(stdin);
	printf("Please enter the personal surname : ");
    gets(fonkPtr[i].soyisim);
	fflush(stdin);
	printf("Please enter the personal age : ");
	scanf("%d",&fonkPtr[i].yas);
	fflush(stdin);
	printf("Please enter the personal job : ");
	gets(fonkPtr[i].gorev);
	fflush(stdin);
    }
	for(i=0;i<entered_num;i++){
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("\n\n%d. Personal :\n\n",i+1);
	printf("Personal Name : %s\n",fonkPtr[i].isim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Surname : %s\n",fonkPtr[i].soyisim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Age : %d\n",fonkPtr[i].yas);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",fonkPtr[i].gorev);
	printf("\n\n--------------------------------------------------------------\n\n");
    }
    free(fonkPtr);
	return 0;
}