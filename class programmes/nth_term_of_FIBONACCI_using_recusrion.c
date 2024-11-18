//write a program to find gcd of 2 integers using recursive function
//Euclid's algorithm


#include<stdio.h>
#include<conio.h>
#include<math.h>

int f(int n){
	if(n==1|| n==2)  return 1;
	else return f(n-1)+f(n-2);
}


int main(){
	int n ; 
	printf("Enter the value of n = ");
	scanf("%d",&n);
	printf("\nThe nth term is = %d",f(n));

	
	
}
