//reverse the number usign recursion

#include<stdio.h>
 #include<conio.h>
 
 int rev(int n,int r ){
 	if(n==0) return r ;//base condition
 
	 r = r*10+(n%10);
 	return rev((n/10),r);

 	
 }
 int main(){
 	int n ;
 	printf("Enter the number  = ");
 	scanf("%d",&n);
 	printf("the reversed number is = %d",rev(n,0));
 	
 	
 }
