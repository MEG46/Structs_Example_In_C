#include <stdio.h>
struct Element{
	int x;
	int y;
};
struct rectangular{
	Element all[4];
};
void ReadInfo(struct rectangular *gon4){
	for(i=0;i<4;i++){
		printf("\n\n-----------------------------------------------\n\n");
		printf("%d DOT : ",i+1);
		printf("\n\n-----------------------------------------------\n\n");
		printf("Please enter 1st dot x : ");
		scanf("%d",&gon4.all[i].x);
		fflush(stdin);
		printf("\n\n-----------------------------------------------\n\n");
		printf("Please enter 1st dot y : ");
		scanf("%d",&gon4.all[i].y);
		fflush(stdin);
		printf("\n\n-----------------------------------------------\n\n");
	}
}
void PrintInfo(struct rectangular *gon4){
	    printf("\n\n-----------------------------------------------\n\n");
		printf("%d DOT : ",i+1);
		printf("\n\n-----------------------------------------------\n\n");
		printf("Please enter 1st dot x : ");
		scanf("%d",&gon4.all[i].x);
		fflush(stdin);
		printf("\n\n-----------------------------------------------\n\n");
		printf("Please enter 1st dot y : ");
		scanf("%d",&gon4.all[i].y);
		fflush(stdin);
		printf("\n\n-----------------------------------------------\n\n");
}
int main(){
   rectangular[4];
   	
}