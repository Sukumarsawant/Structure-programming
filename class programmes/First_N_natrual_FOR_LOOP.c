#include<stdio.h>
#include<conio.h>
#include<math.h>
 int i ;
long fact(int n ){
	long x =1;
	for(i=n;i>1;--i){
		x *= i ;
	}
	return x;
}
void odd(int n){
//	printf("check");
    printf("EVEN\t =");
	for(i =1;i<=n;i=i+2){
	printf("%d\t",i);
	}	
	printf("\n");
}
void even(int n){printf("EVEN\t =");
		for(i =2;i<=n;i=i+2){
			printf("%d\t",i);
		}
	printf("\n");
	}
	
	
	
	
	
int main(){
	int n ; int sum =0;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	for(i =1; i<=n;++i){
		printf("%d\t",i);
		sum+=(i);
	}
	printf("\nSum is = %d\n",sum);
	odd(n);
	
	even(n);
	printf("\nFactorial of N is = %ld\n",fact(n));
	
	return 0;
}
