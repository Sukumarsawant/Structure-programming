//2D- ARRAY
//Matrix Transpose
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i , j ,a[100][100],m,n,sum =0 ,temp;
	printf("Enter the value of rows and columns concecuitively = ");
	scanf("%d%d",&i ,& j );
	printf("Enter the elements of matrix = ");
	for(m = 0; m < i ; ++m){
		
		for(n = 0 ; n<j ; ++n){
			scanf("%d",&a[m][n]);
		//	if(m==0||n==0 || m == i-1 || n ==j-1)
		//	sum+=a[m][n];
		
		}
	}
	
		for(m = 0; m < i ; ++m){
		
		for(n = 0 ; n<j ; ++n){
		
		if(m<n){
			temp = a[m][n];
			a[m][n]=a[n][m];
			a[n][m]= temp;
		}
		}
	
		
	}
	
		for(m = 0; m < i ; ++m){
		
		for(n = 0 ; n<j ; ++n){
			printf("%d\t",a[m][n]);
		
		}
		printf("\n\n");
		
	}
//	printf("Sum of all elements is = %d\n",sum );

}
