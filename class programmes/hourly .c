#include<stdio.h>
int main()
{
	int i, n, t;
	long h;
    printf("Pl.enter the time");
    scanf("%d", &t);
    while(i<=48)
    {
    	n=n*i;
    	  h= 0.12*t*t*t*t + 12*t*t*t -380*t*t + 4100*t + 220;
    	  
	}
	printf("please enter time", t);
	return 0;
}
