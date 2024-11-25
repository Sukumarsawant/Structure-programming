//search


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i , a[100],x ; // arbitary value 100 
	printf("Enter the size of array  = ");
	scanf("%d",&n);
	printf("Enter the array = ");
	for(i = 0 ;i<n ; ++i){
		scanf("%d",&a[i]);
	}
	printf("Enter the target = ");
	scanf("%d",&x);
	
	for(i =0 ; i<n ; ++i){
		if(a[i]==x){
			printf("Number is found at %d",i+1);
			break;
		}
		else if (i==n-1){
			printf("Number not found");
		}
	}
	
	
	
}
