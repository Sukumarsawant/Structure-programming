#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	
	int n ; float sum =0;int i ;
	printf("Value of n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i%2==0)
		sum+=(1.0/(2*i+1));
		else sum-=(1.0/(2*i+1));
	}
	printf("%f",sum);
	return 0;
}
