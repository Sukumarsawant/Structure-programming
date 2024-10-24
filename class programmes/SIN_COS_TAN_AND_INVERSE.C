//write a program to accept angles in degrees and display sin cos tan
//of the angles
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	double a;
	double b;
	clrscr();
	printf("ENTER THE ANGLE IN DEGREES =");
	scanf("%lf",&a);
	b=a*(3.14)/180;
	printf("SIN is = %lf",sin(b));
	printf("\nCOS is = %lf",cos(b));
	printf("\nTAN is = %lf",tan(b));
	printf("\nSin^-1 is = %lf",asin(b));
	printf("\nCos^-1 is = %lf",acos(b));
	printf("\nTan^-1 is = %lf",atan(b));
	getch();



}