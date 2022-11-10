#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Esad {
	char name[30];
	char surname[30];
	int age;
};
int main(){
	int num,i;
	printf("Please enter a number : ");
	scanf("%d",&num);
	struct Esad *TwoBlackMale;
	TwoBlackMale=(struct Esad*)malloc(sizeof(struct Esad)*num);
	for(i=0;i<num;i++){
		printf("\n\n--------------------------------------------------------\n\n");
		printf("%d.Staff\n\n",i+1);
	    printf("\n\n--------------------------------------------------------\n\n");	
		printf("Please enter the staff's name : ");
		scanf("%s",TwoBlackMale[i].name);
	    printf("\n\n--------------------------------------------------------\n\n");	
	    printf("Please enter the staff's surname : ");
		scanf("%s",	TwoBlackMale[i].surname);	
	    printf("\n\n--------------------------------------------------------\n\n");
	    printf("Please enter the staff's age : ");
		scanf("%d",&TwoBlackMale[i].age);
	    printf("\n\n--------------------------------------------------------\n\n");	
			
	}	
	for(i=0;i<num;i++){
		printf("\n\n--------------------------------------------------------\n\n");
		printf("%d.Staff\n\n",i+1);
		printf("Staff Name : %s",TwoBlackMale[i].name);
	    printf("\n\n--------------------------------------------------------\n\n");	
	    printf("Staff Name : %s",TwoBlackMale[i].surname);   
	    printf("\n\n--------------------------------------------------------\n\n");
	    printf("Staff Name : %d",TwoBlackMale[i].age);
	    printf("\n\n--------------------------------------------------------\n\n");	
			
	}	
	free(TwoBlackMale);
	return 0;
}