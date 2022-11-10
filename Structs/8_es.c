#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum{
	mon=1,
	tue=2,
	wed=3,
	thu=4,
	fri=5,
	sat=6,
	sun=7
}daysofweek;
int main(){
 daysofweek daynum;
 printf("Please enter a day number of week beetwen (1-7) : ");
 scanf("%d",&daynum);
 switch(daynum){
 	case mon:
 		printf("Today is Monday (%d. day of week).\n",mon);
 		printf("Weekday.");
 		break;
 	case tue:
 		printf("Today is Tuesday (%d. day of week).\n",tue);
 		printf("Weekday.");
 		break;
 	case wed:
 		printf("Today is Wednesday (%d. day of week).\n",wed);
 		printf("Weekday.");
 		break;
 	case thu:
 		printf("Today is Thursday (%d. day of week).\n",thu);
 		printf("Weekday.");
 		break;
 	case fri:
 		printf("Today is Friday (%d. day of week).\n",fri);
 		printf("Weekday.");
 		break;
    case sat:
 		printf("Today is Saturday (%d. day of week).\n",sat);
 		printf("Weekend.");
 		break;
	case sun:
 		printf("Today is Sunday (%d. day of week).\n",sun);
 		printf("Weekend.");
 		break;
	default:
 		printf("Invalid Process!\n");
 		break;	
 }
}