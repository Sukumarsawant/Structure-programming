//decimal to binary 
#include<stdio.h>
#include<conio.h>



void bin(int n ){
    if(n>1) bin(n/2);
     printf("%d",n%2);
}

int main(){
 int n ; 
 printf("Enter the decimal number = ");
 scanf("%d",&n);
 if(n>0) bin(n);
 else printf("INVALID");
}
