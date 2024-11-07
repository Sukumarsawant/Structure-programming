
/*
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

int i,j,n ,m;
printf("Enter the value of n (rows)= ");
scanf("%d",&n);
printf("Enter the value of m (colums) = " );
scanf("%d",&m);
for(i=1;i<=n;++i){
	for(j=1;j<=m;++j){
		printf("%d ",j);
	}
	printf("\n");
}






return 0 ;
}
