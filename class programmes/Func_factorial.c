/*
	Name: Sukumar Sawant 
	Copyright: SSS
	Date: 11-11-24 16:17
	Description: //write a program to find largest of two integers using function
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int n ){
int fact =1 ,i; 
for( i =1; i<=n;++i){
	fact*=i;
}	
return fact ;
}


int main(){
int n ; 
printf("Enter the value of n = ");
scanf("%d",&n);
printf("%d",fact(n));
	
	
	
}
