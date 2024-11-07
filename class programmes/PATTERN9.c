/*
12345
1234
123
12
1
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

int n,i,j,ct =1 ; 

printf("Enter the value of n = ");
scanf("%d",&n);
for(i =n ; i>0 ;--i){
	
	for(j =1; j<=i;++j){
		printf("%d ",j);
	}
	printf("\n");
}
}
