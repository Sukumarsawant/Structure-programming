/*
	Name: Sukumar sawant
	Date: 07-11-24 17:44
	Description: addition of two integers using function 
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int sum(int a , int b ){
	return a+b;
}

int main(){
	
	int a , b ; 
	printf("Enter the two numbers = ");
	scanf("%d%d",&a,&b);
	printf("%d",sum(a,b));
return 0 ;	
	
}
