#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b,c,temp;
	printf(" Tell the three sides of triangle ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b>c && b+c>a && a+c>b ){
		if(a==b && b==c){
			printf("The triangle is Equilateral");
		}
		else if( a==b || b==c || a==c){
			printf("The triangle is isoceles");
			
		}
		else printf("The traingle is scalene");
	}
	else 
	printf("Invalid Triangle ");
	
	
	return 0;
}
