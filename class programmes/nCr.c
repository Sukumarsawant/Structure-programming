#include<stdio.h>
#include<conio.h>
#include<math.h>
int i;
long fact(int n ){
	long x =1;
	for(i=n;i>1;--i){
		x *= i ;
	}
	return x;
}
int main(){
	int n;int r; printf("Value of n and r respectively= ");
	scanf("%d%d",&n,&r);
	printf("Combination = %d\n",fact(n)/(fact(r)*fact(n-r)));
		printf("Permutations  = %d",fact(n)/fact(n-r));
	}
