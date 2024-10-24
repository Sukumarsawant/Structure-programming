//write a program to calculate area of triangle using base and height
#include<stdio.h>
#include<conio.h>
float a, b, area;
void main(){

	clrscr();

	printf("Enter the base= ");
	scanf("%f",&a);

	printf("\nEnter the height= ");
	scanf("%f",&b);

	area = (1/2.0)*a*b;
	printf("The area  is = %f", area);
	getch();
}