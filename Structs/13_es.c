#include <stdio.h>
#include <stdlib.h>
typedef struct{
   int reel;
   int complex;
}Complex;

void Take(Complex *Num,int num){
	int i=0;
	while(1){
		if(i>=num){
			printf("Sorry,Invalid Process!\n");
			return;
		}
		if(Num[i].reel==0){
			printf("\n\n-------------------------------------------------\n\n");
			printf("%d. Num : ",i+1);
			printf("\n\n-------------------------------------------------\n\n");
			printf("Reel Number Part of Complex Number : ");
			scanf("%d",&Num[i].reel);
			fflush(stdin);
			printf("\n\n-------------------------------------------------\n\n");
			printf("Complex Number Part of Complex Number : ");
			scanf("%d",&Num[i].complex);
			fflush(stdin);
			printf("\n\n-------------------------------------------------\n\n");
			return;
		}
		i++;
	}
}
void Print(Complex *Num,int c){
	int i;
	for(i=0;i<c;i++){
		
			printf("\n\n-------------------------------------------------\n\n");
			printf("%d. Num : ",i+1);
			printf("\n\n-------------------------------------------------\n\n");
			printf("Reel Number Part of Complex Number : %d",Num[i].reel);
			fflush(stdin);
			printf("\n\n-------------------------------------------------\n\n");
			printf("Complex Number Part of Complex Number %d",Num[i].complex);
            if(Num[i].complex>0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d + %dz",Num[i].reel,Num[i].complex);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(Num[i].complex==0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d ",Num[i].reel);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(Num[i].reel==0){
				printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %dz ",Num[i].complex);
			printf("\n\n-------------------------------------------------\n\n");
			}else{
			printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d  %dz",Num[i].reel,Num[i].complex);
			printf("\n\n-------------------------------------------------\n\n");	
			}
			fflush(stdin);
		}
}
void Sum(Complex *Num,int c){
	int result,result1;
	result=Num[0].reel+Num[1].reel;
	result1=Num[0].complex+Num[1].complex;
	if(result1>0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d + %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result1==0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d ",result);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result==0){
				printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %dz ",result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else{
			printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d  %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");	
			}
}
void Subs(Complex *Num,int c){
	int result,result1;
	result=Num[0].reel-Num[1].reel;
	result1=Num[0].complex-Num[1].complex;
	if(result1>0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d + %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result1==0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d ",result);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result==0){
				printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %dz ",result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else{
			printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d  %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");	
			}
}
void Mult(Complex *Num,int c){
	int result,result1;
	result=Num[0].reel*Num[1].reel;
	result1=Num[0].complex*Num[1].complex;
	if(result1>0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d + %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result1==0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d ",result);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result==0){
				printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %dz ",result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else{
			printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d  %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");	
			}
}
void Div(Complex *Num,int c){
	int result,result1;
	result=Num[0].reel/Num[1].reel;
	result1=Num[0].complex/Num[1].complex;
	if(result1>0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d + %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result1==0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d ",result);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result==0){
				printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %dz ",result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else{
			printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d  %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");	
			}
}
void Opp(Complex *Num,int c){
	int result,result1;
	int d;
	printf("Which number do you want to find opposite : ");
	scanf("&d",&d);
	if(d==1||d==2){
	result=result - Num[d-1].reel;
	result1=result - Num[d-1].complex;
	if(result1>0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d + %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result1==0){
            printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d ",result);
			printf("\n\n-------------------------------------------------\n\n");
			}else if(result==0){
				printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %dz ",result1);
			printf("\n\n-------------------------------------------------\n\n");
			}else{
			printf("\n\n-------------------------------------------------\n\n");
			printf("Whole Number : %d  %dz",result,result1);
			printf("\n\n-------------------------------------------------\n\n");	
			}
}else{
	printf("Sorry,Invalid Process!\n");
}
}
int main(){
	while(1){
	char ch1;
	int c;
	int ch;
	c=2;
	Complex *Num;
	Num=(Complex*)calloc(Num,sizeof(c));
	Take(Num,c);
	Take(Num,c);
	do{
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Processes :");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(1) Print Numbers");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(2) Sum Numbers");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(3) Substract Numbers");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(4) Multiply Numbers");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(5) Divide Numbers");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(6) Find Opposite Numbers");
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("(6) Please enter a process : ");
	scanf("%d",&ch);
	fflush(stdin);
	if(ch==1){
		Print(Num,c);
	}else if(ch==2){
		Sum(Num,c);
	}else if(ch==3){
		Subs(Num,c);
	}else if(ch==4){
		Mult(Num,c);
	}else if(ch==5){
		Div(Num,c);
	}else if(ch==6){
		Opp(Num,c);
	}else{
		printf("Invalid Process!\n");
	} 
	printf("\n\n--------------------------------------------------------------\n\n");
	printf("Do you want to continue ? (Y \ N) : ");
	scanf("%c",&ch1);
	fflush(stdin);
	printf("\n\n--------------------------------------------------------------\n\n");
	
}while(ch1!='N'||ch1!='n');
}
return 0;
}
