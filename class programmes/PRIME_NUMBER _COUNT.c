#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
int n , d , c,i;
//printf("Enter the value of n");
for(n = 1 ; n<=1000;++n){
	c=0;
	for(i = 1; i<=n/2;++i){
		if(n%i==0){
			c++;
		}
	
	}
	if(c+1==2) printf("%d\t",n);
}	
	
}
