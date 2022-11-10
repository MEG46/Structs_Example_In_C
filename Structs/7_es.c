#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Esad {
	char name[30];
	char surname[30];
	int age;
};
void ReadInfo(struct Esad *Staff,int num){
	int i;
	for(i=0;i<num;i++){
		printf("\n\n--------------------------------------------------------\n\n");
		printf("%d.Staff :",i+1);
	    printf("\n\n--------------------------------------------------------\n\n");	
		printf("Please enter the staff's name : ");
		scanf("%s",Staff[i].name);
	    printf("\n\n--------------------------------------------------------\n\n");	
	    printf("Please enter the staff's surname : ");
		scanf("%s",	Staff[i].surname);	
	    printf("\n\n--------------------------------------------------------\n\n");
	    printf("Please enter the staff's age : ");
		scanf("%d",&Staff[i].age);
	    printf("\n\n--------------------------------------------------------\n\n");	
			
	}	
}
void PrintInfo(struct Esad *Staff,int num){
	int i;
     for(i=0;i<num;i++){
		printf("\n\n--------------------------------------------------------\n\n");
		printf("%d.Staff :",i+1);
	    printf("\n\n--------------------------------------------------------\n\n");	
		printf("Please enter the staff's name : %s",Staff[i].name);
	    printf("\n\n--------------------------------------------------------\n\n");	
	    printf("Please enter the staff's surname : %s",Staff[i].surname);
	    printf("\n\n--------------------------------------------------------\n\n");
	    printf("Please enter the staff's age : %d",Staff[i].age);
	    printf("\n\n--------------------------------------------------------\n\n");	
				
	}		
}
void ChngInfo(struct Esad *Staff,struct Esad *Gecici,int degnum){
        printf("\n\n--------------------------------------------------------\n\n");
		printf("%d.Staff :",degnum);
	    printf("\n\n--------------------------------------------------------\n\n");	
		printf("Please enter the staff's name : ");
		scanf("%s",Gecici->name);
	    printf("\n\n--------------------------------------------------------\n\n");	
	    printf("Please enter the staff's surname : ");
		scanf("%s",Gecici->surname);	
	    printf("\n\n--------------------------------------------------------\n\n");
	    printf("Please enter the staff's age : ");
		scanf("%d",&Gecici->age);
	    printf("\n\n--------------------------------------------------------\n\n");	
	    strcpy(Staff[degnum-1].name,Gecici->name);
	    strcpy(Staff[degnum-1].surname,Gecici->surname);
		Staff[degnum-1].age=Gecici->age;    
}
int main(){
	char ch;
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	fflush(stdin);
	struct Esad *Staff;
	struct Esad *Gecici;
	Staff=(struct Esad*)malloc(sizeof(struct Esad)*num);
	ReadInfo(Staff,num);
	PrintInfo(Staff,num);
	fflush(stdin);
	printf("Do you want to change the staff info? (Y / N) : ");
    scanf("%c",&ch);
    fflush(stdin);
    if(ch=='Y'||ch=='y'){
       int degnum;
	   printf("Please enter a number : ");
	   scanf("%d",&degnum);
	   fflush(stdin);
	   ChngInfo(Staff,Gecici,degnum);
	   PrintInfo(Staff,num);
	   printf("\n\n--------------------------------------------------------\n\n");
	   printf("Thanks for choosing us!\n");	
	   printf("\n\n--------------------------------------------------------\n\n");	
	}else if(ch=='N'||ch=='n'){
	   printf("\n\n--------------------------------------------------------\n\n");	
	   printf("Thanks for choosing us!\n");	
	   printf("\n\n--------------------------------------------------------\n\n");	
	}else{
	   printf("\n\n--------------------------------------------------------\n\n");	
	   printf("Invalid Process!\n");	
	   printf("\n\n--------------------------------------------------------\n\n");
	   printf("Thanks for choosing us!\n");	
	   printf("\n\n--------------------------------------------------------\n\n");	
	}
	free(Staff);
	return 0;
}