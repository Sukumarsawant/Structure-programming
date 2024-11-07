#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	int n , ncopy ,sum, d;
//	printf("Enter a postive INTEGER  = ");
	//scanf("%d",&n);
	for(n =100;n<1000;++n){
	sum =0;
	ncopy = n ; 
	while(n>0){
		d = n%10;
		sum +=d*d*d;
		n/=10;
	}
	if(sum == ncopy){
		printf("%d\t",ncopy);
	}
	 n = ncopy; 
}
	return 0 ;
	
	
}
