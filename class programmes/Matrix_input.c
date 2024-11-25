//2D- ARRAY
//Matrix Input 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i , j ,a[100][100],m,n;
	printf("Enter the value of rows and columns concecuitively = ");
	scanf("%d%d",&i ,& j );
	printf("Enter the elements of matrix = ");
	for(m = 0; m < i ; ++m){
		
		for(n = 0 ; n<j ; ++n){
			scanf("%d",&a[m][n]);
		}
	}
		for(m = 0; m < i ; ++m){
		
		for(n = 0 ; n<j ; ++n){
			printf("%d\t",a[m][n]);
		}
		printf("\n\n");
	}
	
}
