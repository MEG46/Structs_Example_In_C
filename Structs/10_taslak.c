#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef Struct{
	char name[50];
	char surname[50];
	int age;
	char job[50];
}Element;
void PrintOnly(struct Element *Staffs,int num){
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Name : %s ",Staffs[num-1].name);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Surname : %s ",Staffs[num-1].surname);
	printf("\n\n--------------------------------------------------\n\n");
	printf("%Staff Age : %d",Staffs[num-1],age);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Job : %s ",Staffs[num-1].job);
	printf("\n\n--------------------------------------------------\n\n");
}
void DeleteOnly(struct Element *Staffs,int num,int denum){
	struct Element Staff1;
	strcpy(Staffs1.name,Staffs[num-1].name);
	strcpy(Staffs1.surname,Staffs[num-1].surname);
	Staffs1.age=Staffs[num-1].age;
	strcpy(Staffs1.job,Staffs[num-1].job);
	strcpy(Staffs[num-1].name,Staffs[denum-1].name);
	strcpy(Staffs[num-1].surname,Staffs[denum-1].surname);
	Staffs[num-1].age=Staffs[denum-1].age;
	strcpy(Staffs[num-1].job,Staffs[denum-1].job);
	num=num-1;
	Element Staffs[num];
}
void AddOnly(struct Element *Staffs,int num){
	num=num+1;
	Element Staff[num];
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Name : ");
	scanf("%s",Staffs[num-1].name);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Surame : ");
	scanf("%s",Staffs[num-1].surname);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Name : ");
	scanf("%d",Staffs[num-1].age);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Job : ");
	scanf("%s",Staffs[num-1].job);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
}
void ChngOnly(struct Element *Staffs,int num){
	struct Element Staff1;
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Name : ");
	scanf("%s",Staffs1.name);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Surame : ");
	scanf("%s",Staffs1.surname);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Name : ");
	scanf("%d",Staffs1.age);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	printf("Staff Job : ");
	scanf("%s",Staffs1.job);
	fflush(stdin);
	printf("\n\n--------------------------------------------------\n\n");
	strcpy(Staffs[num-1].name,Staffs1.name);
	strcpy(Staffs[num-1].name,Staffs1.surname);
	Staffs[num-1].age=Staffs1.age;
	strcpy(Staffs[num-1].name,Staffs1.job);
}
int main(){
	struct Element Staffs[];
	
}