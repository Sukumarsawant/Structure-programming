#include<stdio.h>
int main(){
	int n,count=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n!=0){
		count = 0;
	}
	while(n>0){
			n = n / 10;
			count++;
}
	printf("The number of digits are: %d",count);
	return 0;
}
