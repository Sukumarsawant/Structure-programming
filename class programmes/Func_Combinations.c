//Calculate nCr using Factorial func 


#include<stdio.h>
#include<conio.h>
#include<math.h>

long fact(int n ){
int f =1 ,i; 
for( i =1; i<=n;++i){
	f*=i;
}	
return f;
}


int main(){
int n,r,c;
printf("Enter the value of n and r = ");
//n!/(r!*(n-r)!)
scanf("%d%d",&n,&r);

c = fact(n)/(fact(r)*(fact(n-r)));
printf("The value of combination is = %d",c);
	
	
}
