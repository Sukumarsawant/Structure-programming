// matrix multiplication
#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,k,r1,c1,r2,c2,m1[100][100],m2[100][100],r[100][100];
	printf("Enter the size of r1 c1 r2 c2 resp.");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	if(c1 !=r2) {
		printf("INVALID");
		return 1 ;
	}
	printf("Enter the matrix 1 ");
	for(i =0;i<r1;++i){
		for(j=0;j<c1;++j){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter the matrix 2 ");
	for(i =0;i<r2;++i){
		for(j=0;j<c2;++j){
			scanf("%d",&m2[i][j]);
		}
	}
	
		for(i=0;i<r1;++i){
			for(j=0;j<c1;++j){
				r[i][j]=0;
				for(k=0;k<c1;++k){
				r[i][j]+=m1[i][k]*m2[k][j];
			}
			}
		}
		printf("The result is \n");
	for(i =0;i<r1;++i){
		for(j=0;j<c2;++j){
			printf("%d\t",r[i][j]);
		}
	}
	
	
}
