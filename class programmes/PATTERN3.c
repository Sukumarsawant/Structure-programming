04-11-24 16:58

/*
1
22
333
444
5555
66666
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

int n,i,j ; 
printf("Enter the value of n = ");
scanf("%d",&n);
for(i =1 ; i<= n ; ++i){
	for(j =1; j<=i;++j){
		printf("%d ",i);
	}
	printf("\n");
}
}
