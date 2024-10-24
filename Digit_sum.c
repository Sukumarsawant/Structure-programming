#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a; // 3 digit 
   
    printf("Write a 3-digit number = ");
    scanf("%d",&a);
    printf("The sum is = %d", (a%10)+((a/10)%10)+((a/100)%10));
    getch();
   return 0;
   //happy coding !!
}