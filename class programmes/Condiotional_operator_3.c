#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a ,b,c,mx;
	/*printf("Enter the numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	mx = a>b?a:b;
	mx = (mx)>c?(mx):c;
	printf("Largest is  : %d ",mx);*/
	
	
	//nested conditional operators 
	printf("Enter the numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	mx = a>b ? ((a>c?a:c)):((b>c?b:c)); //nesting 
	printf("Largest is  : %d ",mx);
	
	return 0;
}
