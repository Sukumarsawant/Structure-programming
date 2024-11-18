//write a program to find gcd of 2 integers using recursive function
//Euclid's algorithm


#include<stdio.h>
#include<conio.h>
#include<math.h>

int gcd(int x,int y){
	if(y!=0) return gcd(y,x%y);
	else return x;
}


int main(){
	
	int x, y ;
	int r;
	scanf("%d%d",&x,&y);
	r= gcd(x,y);
	printf("GCD is %d",r);
	
	
	
	return 0 ;
}
