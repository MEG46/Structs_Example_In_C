#include <stdio.h>
#include <string.h>
struct Profil{
	char isim[25];
	char soyisim[25];
	int yas;
	char gorev[15];
};
int main(){
	int entered_num,i;
	printf("Please how many staffs you want to enter the system : ");
	scanf("%d",&entered_num);
	fflush(stdin);
	struct Profil personel[entered_num];
	for(i=0;i<entered_num;i++){
	printf("\n\n%d. Staff: \n\n",i+1);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Please enter the personal name : ");
	gets(personel[i].isim);
	fflush(stdin);
	printf("Please enter the personal surname : ");
    gets(personel[i].soyisim);
	fflush(stdin);
	printf("Please enter the personal age : ");
	scanf("%d",&personel[i].yas);
	fflush(stdin);
	printf("Please enter the personal job : ");
	gets(personel[i].gorev);
	fflush(stdin);
    }
    for(i=0;i<entered_num;i++){
    printf("\n\n%d. Staff: \n\n",i+1);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",personel[i].isim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Surname : %s\n",personel[i].soyisim);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Age : %d\n",personel[i].yas);
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Personal Name : %s\n",personel[i].gorev);
	printf("\n\n--------------------------------------------------------------\n\n");
    }
	return 0;
}