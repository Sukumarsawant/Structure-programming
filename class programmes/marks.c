#include<stdio.h>
#include<conio.h>
#include<math.h>


//using if-else
int main(){
	int a;
	printf("Enter your marks =");
	scanf("%d",&a);
	if(a>=80) printf("Your Grade is O");
	else if(a>=70) printf("Your Grade is A");
	else if(a>=60) printf("Your Grade is B");
	else if(a>=50) printf("Your Grade is C");
	else printf("Your Grade is E");
	return 0;
}
/*
//using if statements
int main(){
	int a;
	printf("Enter your marks =");
	scanf("%d",&a);
	 if(a>=80) printf("Your Grade is O");
	 if(a>=70 && a<80) printf("Your Grade is A");
	 if(a>=60 && a<70)printf("Your Grade is B");
	 if(a>=50 && a<60)printf("Your Grade is C");
	if(a<50) printf("Your Grade is E");
	return 0;
}
*/
// using nested if-else
/*
int main(){
	int a;
	printf("Enter your marks =");
	scanf("%d",&a);
	 if(a>=80){
	  printf("Your Grade is O");
}
	 else{
	 if(a>=70) printf("Your Grade is A");
	 else{
	 if(a>=60)printf("Your Grade is B");
	 else{
	 if (a>=50)printf("Your Grade is C");
	 else printf("Your Grade is E");
	}
	}
	}
	
	 	return 0;
}
	*/

