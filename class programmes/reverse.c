#include<stdio.h>
#include<math.h>
int main(){
	int count=1,count0=1,i=0,n,revn=0,a,b;
	printf("Enter a number to be reversed: ");
	scanf("%d",&n);
		if(n!=0){
		count0 = 0;
		count = 0;
	}
	a=n;
		while(a>0){
			a = a / 10;
			count0++;
}
	while(n>0){
		
		i = n % 10;
		revn = revn + i*pow(10,count0-count);
	
			n = n / 10;
			count++;	
	
}
printf("The reversed number is: %d",revn/10);
return 0;

}
