#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){
	
	
	int i = 1 ;int n;

	printf("Input the number = ");
	scanf("%d",&n);
	while(i<=10){
		printf( "%d * %d = ",n, i);
		printf("%d\n",n*i);
		++i;
	}
	
	
	return 0 ;
}
