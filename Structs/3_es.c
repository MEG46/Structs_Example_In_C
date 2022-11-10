#include <stdio.h>
#include <string.h>
struct Profil{
	char isim[25];
	char soyisim[25];
	int yas;
	char gorev[15];
};
int main(){
	struct Profil personel;
	struct Profil *fonkPtr;
	fonkPtr=&personel;
	printf("Please enter the personal name : ");
	gets(personel.isim);
	fflush(stdin);
	printf("Please enter the personal surname : ");
    gets(personel.soyisim);
	fflush(stdin);
	printf("Please enter the personal age : ");
	scanf("%d",&personel.yas);
	fflush(stdin);
	printf("Please enter the personal job : ");
	gets(personel.gorev);
	fflush(stdin);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("\n\nNormal Declaration :\n\n");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",personel.isim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Surname : %s\n",personel.soyisim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Age : %d\n",personel.yas);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",personel.gorev);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("\n\nPointer Declaration :\n\n");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",(*fonkPtr).isim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Surname : %s\n",(*fonkPtr).soyisim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Age : %d\n",(*fonkPtr).yas);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",(*fonkPtr).gorev);
	printf("\n\n--------------------------------------------------------------\n\n");
	return 0;
}