// add and subtraction of matriix using 2d array 
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100][100],b[100][100],r[100][100],i,j,n;
	int r1 ,c1;
	printf("Enter the size of the matrix");
	scanf("%d%d",&r1,&c1);
	//enter the value of matrix 
	for(i  =0 ; i<r1 ; ++i ){
		for(j =0 ;j<c1;++j){
			scanf("%d",&a[i][j]);
		}
	}
	for(i  =0 ; i<r1 ; ++i ){
		for(j =0 ;j<c1;++j){
			scanf("%d",&b[i][j]);
		}
	}
		for(i  =0 ; i<r1 ; ++i ){
		for(j =0 ;j<c1;++j){
		r[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The addition is = \n");
		for(i  =0 ; i<r1 ; ++i ){
		for(j =0 ;j<c1;++j){
		printf("%d\t",r[i][j]);
		}
		printf("\n");
	}
	printf("\n The subtraction is = \n");
			for(i  =0 ; i<r1 ; ++i ){
		for(j =0 ;j<c1;++j){
		r[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("The addition is = \n");
		for(i  =0 ; i<r1 ; ++i ){
		for(j =0 ;j<c1;++j){
		printf("%d\t",r[i][j]);
		}
		printf("\n");
	}
	
}
