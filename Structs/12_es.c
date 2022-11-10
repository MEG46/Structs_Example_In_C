#include <stdio.h>
typedef struct {
	int order;
	char bknm[20];
	char wrtr[20];
	char pblshr[20];
	int pgnum;
} shelf;
void Take(int);
void Print(int);
void TakeOne(int);
void AddOne(int);
void Search(int);

int main(){
	int num;
	int prs;
	printf("Please enter how many books do you have on your bookshelf : ");
	scanf("%d",&num);
	shelf Book[num];
	Take(num);
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("Welcome To Bookshelf Application : ");
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("Process : ");
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("(1) Print All The Books : ");
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("(2) Add New Book : ");
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("(3) Print Just Added Book : ");
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("(4) Find The Desired Book : ");
	printf("\n\n------------------------------------------------------------------\n\n");
	printf("Please enter a process : ");
	scanf("%d",&prs);
	if(prs==1){
	   Print(num);
	}else if(prs==2){
	   num=num+1;
	   shelf Book[num];
	   TakeOne(num);
	}else if(prs==3){
	   AddOne(num);
	} else if(prs==4){
	   Search(num);
	}else{
		printf("Invalid Process! Please enter again.\n");
	}
return 0;
}

void Take(int num){
	shelf Book[num];
	int i;
	for(i=0;i<num;i++){
		Book[i].order=i+1;
		printf("------------------------------------------------\n\n");
		printf("%d. Book:",Book[i].order);
		printf("\n\n------------------------------------------------\n\n");
		printf("Book : ");
		scanf("%s",Book[i].bknm);
		printf("\n\n------------------------------------------------\n\n");
		printf("Writer : ");
		scanf("%s",Book[i].wrtr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Publisher : ");
		scanf("%s",Book[i].pblshr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Page Number : ");
		scanf("%d",&Book[i].pgnum);
		printf("\n\n------------------------------------------------\n\n");
	}
}
void Print(int num){
	shelf Book[num];
	int i;
	for(i=0;i<num;i++){
		printf("------------------------------------------------\n\n");
		printf("%d. Book:",Book[i].order);
		printf("\n\n------------------------------------------------\n\n");
		printf("Book : %s",Book[i].bknm);
		printf("\n\n------------------------------------------------\n\n");
		printf("Writer : %s",Book[i].wrtr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Publisher : %s",Book[i].pblshr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Page Number : %d",Book[i].pgnum);
		printf("\n\n------------------------------------------------\n\n");
	}
}
void TakeOne(int num){
	shelf Book[num];
		printf("------------------------------------------------\n\n");
		printf("%d. Book:",num);
		printf("\n\n------------------------------------------------\n\n");
		printf("Book : ");
		scanf("%s",Book[num-1].bknm);
		printf("\n\n------------------------------------------------\n\n");
		printf("Writer : ");
		scanf("%s",Book[num-1].wrtr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Publisher : ");
		scanf("%s",Book[num-1].pblshr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Page Number : ");
		scanf("%d",&Book[num-1].pgnum);
		printf("\n\n------------------------------------------------\n\n");
	}
void AddOne(int num){
	shelf Book[num];
		printf("------------------------------------------------\n\n");
		printf("%d. Book:",num);
		printf("\n\n------------------------------------------------\n\n");
		printf("Book : %s",Book[num-1].bknm);
		printf("\n\n------------------------------------------------\n\n");
		printf("Writer : %s",Book[num-1].wrtr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Publisher : %s",Book[num-1].pblshr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Page Number : %d",Book[num-1].pgnum);
		printf("\n\n------------------------------------------------\n\n");
	}
void Search(int num){
	shelf Book[num];
    int dsrd;
	printf("Please enter the name of desired book : ");
	scanf("%d",&dsrd);
	if(dsrd>=num){
		printf("The entered number is bigger than bookshelf's book number!\n");
		return;
	}
	int j=0;
	while(num>j){
		if(Book[j].order==dsrd){
		dsrd=dsrd-1;
		printf("------------------------------------------------\n\n");
		printf("%d. Book:",dsrd);
		printf("\n\n------------------------------------------------\n\n");
		printf("Book : %s",Book[dsrd].bknm);
		printf("\n\n------------------------------------------------\n\n");
		printf("Writer : %s",Book[dsrd].wrtr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Publisher : %s",Book[dsrd].pblshr);
		printf("\n\n------------------------------------------------\n\n");
		printf("Page Number : %d",Book[dsrd].pgnum);
		printf("\n\n------------------------------------------------\n\n");	
		return;
		}
		j++;
	}
}