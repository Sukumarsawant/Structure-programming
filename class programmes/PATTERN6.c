/*
a
ab
abc 
abcd
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
		printf("%c ",j+96); /// can be relaced by i+96 to get another pattern
	}
	printf("\n");
}
}
