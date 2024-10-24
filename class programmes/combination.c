#include<stdio.h>
int main()
{
	int i,j,k;
	long p,	f,o,c,n,r,m;p=1;f=1;m=1;o=1;
	printf("Please enter two values:");
	scanf("%ld",&n);
	scanf("%ld", &r);
	o=n-r;
	while(n>=r);
	{
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	for(j=1;j<=n;j++)
	{  
		m=m*j;
		
	}
	for(k=1;k<=o;k++)
	{
		p=p*k;
	}
	
	c= f/m*(f-m);
		
	}
 	printf("the combination is:",c);
	return 0;
}
