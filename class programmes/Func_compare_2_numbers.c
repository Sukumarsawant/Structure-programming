/*
	Name: Sukumar Sawant 
	Copyright: SSS
	Date: 11-11-24 16:17
	Description: //write a program to find largest of two integers using function
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int compare(int a,int b){
	if(a>b) return a ;
	else return b ;
}



int main(){
	
	int a, b ,c,largest ; 
	printf("Enter the value of a b c = ");
	scanf("%d%d%d",&a,&b,&c);
	
	largest =compare(a,b);
	largest = compare(largest,c);
	printf("%d",largest);
	
	
	
	
}
