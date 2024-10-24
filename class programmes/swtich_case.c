#include<stdio.h>
#include<conio.h>	
#include<math.h>
int main(){
	
	int a;
	printf("Enter the month no. ");
	scanf("%d",&a);
	switch(a){
		case 1 : printf("January"); break;
		case 2 : printf("February"); break;
		case 3 : printf("march"); break;
		case 4 : printf("april"); break;
		case 5 : printf("may") ;break;
		case 6 : printf("June"); break;
		case 7 : printf("July"); break;
		case 8 : printf("august"); break;
		case 9 : printf("september"); break;
		case 10 : printf("October"); break;
		case 11 : printf("November"); break;
		case 12 : printf("December"); break;
		default : printf("INVALID MONTH NUMBER");//no need of break
		
	}
	return 0;
}
