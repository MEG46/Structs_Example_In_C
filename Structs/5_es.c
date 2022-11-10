#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Info {
	int quiz1;
	int quiz2;
	int midterm;
	int final;
};
struct Infor{
	char name;
	char surname;
	int stdnum;
};
struct Info1 {
	int quiz1;
	int midterm;
	int final;
};
void PrintValue(struct Info *memo){
	printf("\n\n-------------------------------------------\n\n");
    printf("1st Quiz : %d\n",memo->quiz1);
    printf("\n\n-------------------------------------------\n\n");
    printf("\n\n-------------------------------------------\n\n");
    printf("2nd Quiz : %d\n",memo->quiz2);
    printf("\n\n-------------------------------------------\n\n");
    printf("\n\n-------------------------------------------\n\n");
	printf("Midterm Exam : ",memo->midterm);
	printf("\n\n-------------------------------------------\n\n");
	printf("\n\n-------------------------------------------\n\n");
	printf("Final Exam : ",memo->final);
	printf("\n\n-------------------------------------------\n\n");
}
void TakeValue(struct Info *memo){
	printf("1st Quiz : ");
	scanf("%d",&memo->quiz1);
	fflush(stdin);
	printf("2nd Quiz : ");
	scanf("%d",&memo->quiz2);
	fflush(stdin);
	printf("Midterm Exam : ");
	scanf("%d",&memo->midterm);
	fflush(stdin);
	printf("Final Exam : ");
	scanf("%d",&memo->final);
}
void PrintValue1(struct Info1 *memo1){
	printf("\n\n-------------------------------------------\n\n");
    printf("Quiz : %d\n",memo1->quiz1);
    printf("\n\n-------------------------------------------\n\n");
    printf("\n\n-------------------------------------------\n\n");
	printf("Midterm Exam : ",memo1->midterm);
	printf("\n\n-------------------------------------------\n\n");
	printf("\n\n-------------------------------------------\n\n");
	printf("Final Exam : ",memo1->final);
	printf("\n\n-------------------------------------------\n\n");
}
void TakeValue1(struct Info1 *memo1){
	printf("Quiz : ");
	scanf("%d",&memo1->quiz1);
	fflush(stdin);
	printf("Midterm Exam : ");
	scanf("%d",&memo1->midterm);
	fflush(stdin);
	printf("Final Exam : ");
	scanf("%d",&memo1->final);
}
void TakeValue2(struct Infor *mem){
	printf("Name : ");
	scanf("%d",&mem->name);
	fflush(stdin);
	printf("Midterm Exam : ");
	scanf("%d",&mem->surname);
	fflush(stdin);
	printf("Student Number : ");
	scanf("%d",&mem->stdnum);
}
void PrintValue2(struct Infor *mem){
	printf("\n\n-------------------------------------------\n\n");
	printf("Name : %s\n",mem->name);
	printf("\n\n-------------------------------------------\n\n");
	printf("Surname : %s\n",mem->surname);
	printf("\n\n-------------------------------------------\n\n");
	printf("Student Number : %d\n",mem->stdnum);
	printf("\n\n-------------------------------------------\n\n");
}
int main(){
	struct Info memo;
	struct Info1 memo1;
	enum Level {
		Cp1=1,
		Cpl1=2,
		Tl1=3,
		Cls1=4,
		Ph1=5,
		Gch=6,
		Pel1=7
	
    };
    int chs;
    printf("Please enter the lesson :\n");
    printf("(1) = Cp1 = Computer Programming - I\n");
    printf("(2) = Cpl1 = Computer Programming Lab - I\n");
    printf("(3) = Tl1 = Turkish Language - I\n");
    printf("(4) = Cls1 = Calculus - I\n");
    printf("(5) = Ph1 = Physics - I\n");
    printf("(6) = Gch = General Chemistry - I\n");
    printf("(7) = Pel1 = Professional English - I : ");
    scanf("%d",&chs);
    fflush(stdin);
    if(chs==1){
    	TakeValue(&memo);
    	PrintValue(&memo);
	}else if(chs==2){
    	TakeValue(&memo);
    	PrintValue(&memo);
	}else if(chs==3){
    	TakeValue1(&memo1);
    	PrintValue1(&memo1);
	}else if(chs==4){
    	TakeValue(&memo);
    	PrintValue(&memo);
	}else if(chs==5){
    	TakeValue(&memo);
    	PrintValue(&memo);
	}else if(chs==6){
    	TakeValue(&memo);
    	PrintValue(&memo);
	}else if(chs==7){
    	TakeValue(&memo);
    	PrintValue(&memo);
	}else{
		printf("Invalid Process!\n");
	}
	return 0;
}