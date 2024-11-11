/*
	Name: Sukumar Sawant 
	Copyright: SSS
	Date: 11-11-24 16:17
	Description: //write a program to find largest of two integers using function
*/






#include<stdio.h>
#include<conio.h>
#include<math.h>

int compare(a,b){
	if(a>b) return a ;
	else return b ;
}



int main(){
	
	int a, b ,largest ; 
	printf("Enter the value of a and b = ");
	scanf("%d%d",&a,&b);
	
	largest =compare(a,b);
	printf("%d",largest);
	
	
	
	
}
