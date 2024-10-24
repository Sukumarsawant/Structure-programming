#include<stdio.h>
#include<math.h>
int main(){
	int n,dup2,dup1,count=1,dup,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	dup = n;

	if(n!=0){
		count = 0;
	}
	while(n>0){
			n = n / 10;
			count++;
	}
	n=dup;
	while(n>0){
		i = n % 10;
		sum = sum + pow(i,count);
		n = n / 10;
		
	}
	n=dup;
	if(sum == dup){
		printf("\n%d is an armstrong number",n);
	}
	else{
		printf("%d is not an armstrong number",n);
	}
	printf("\nThe number of digits are: %d",count);
	return 0;
}
