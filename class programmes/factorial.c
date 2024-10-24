#include<stdio.h>
int main()
{
	//code for printing factorial
	int i,n;
	long f; //f=1;
	printf("\n\t\n Please enter number");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		f=f*i;
	}
	printf("\n\t\n factorial=%ld",f);
 return 0;
}
