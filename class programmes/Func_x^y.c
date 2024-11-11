//write own func to write x^y
#include<stdio.h>
#include<conio.h>
#include<math.h>

long power(int x, int y ){
	int p=1,i;
	for(i =0 ; i<y ; ++i){
		p*=x;
	}
	return p ;
	
}
int main(){
	int x , y ;
	long p ; 
	printf("Enter the value of x and y = ");
	scanf("%d%d",&x,&y);
	p = power(x,y);
	printf("The value of x^y = %ld",p);
}
