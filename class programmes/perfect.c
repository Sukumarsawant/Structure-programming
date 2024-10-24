#include<stdio.h>
int main(){
	int i=0,sum,n,perfect,factor,a,b;
	printf("Enter the number: ");
	scanf("%d",&n);
	sum = 0;
	for(i = 1; i <=n ; i++){
		if(n%i==0){
			sum = sum + i;
		};
	}
		if(sum == 2*n){
			printf("\nThe number is perfect number");
			
		}
		else{
			printf("The number is not perfect number");
		}
		
		
	
	return 0;
}
