#include<conio.h>
#include<stdio.h>
#include<math.h>
 int main(){
 	int num , n ; int t =0; int rev = 0 ;
 	printf("Enter the value of n = ");
 	scanf("%d",&num);
 	while(num%10 >0){
 		n = num%10 ; 
 		num= num/10;
 		printf("%d",n);
 		rev*=10;
 		rev =n+rev;
 		
	 }
	 printf("\nrev :- %d",rev);
	 
 	
 }
