//write a program to measure distandce in inch and display equivalent distance
// in FEEt and inch
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

int a , b;
clrscr();
printf("write the distance in inch = \n");
scanf("%d",&a);
printf("The measure in feet and inch is = %d %d''",(a/12),(a%12));
getch();

return 0;
}