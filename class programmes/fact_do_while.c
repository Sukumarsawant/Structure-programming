#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

	int n ,i;	
	long fact = 1 ;
	do{
	printf("Enter one positive integer :");
	scanf("%d",&n);
}
	while(n<0);
	for(i =0 ;i< n ;++i){
		fact = fact*(i+1);
	}
	printf("The factorail is = %ld",fact);
	
	
	
	
	return 0 ; 
}
