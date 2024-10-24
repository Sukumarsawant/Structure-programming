#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int cx,cy,sum,r;

	printf("Enter the coordinates of x and y respectively ");
	scanf("%d%d",&cx,&cy);
		printf("Enter the radius of the circle ");
	scanf("%d",&r);
	sum = cx*cx + cy*cy ;
	if(sum>r*r){
		printf("The point is outside the circle");
	}
		else if(sum==r*r){
		printf("The point is on the circle");
	}
		else{
		printf("The point is inside the circle");
	}
	
	
	return 0 ;
}
