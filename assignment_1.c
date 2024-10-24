//s=u*t+((1/2.)*a*t*t)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float s,u,t,a;
   
    printf("The value of u,a,t respectively are = ");
    scanf("%f%f%f",&u,&a,&t);
    s =u*t+((1/2.)*a*t*t);
    printf("\nThe value of distance is = %f",s);
   
    return 0;
}