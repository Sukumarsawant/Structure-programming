#include<stdio.h>
#include<conio.h>
#include<math.h>
int i;int c;
	
	char str[7];
	
	void name(int n){
		while(scanf("%c",&str[i])){
			i++;
			c++;
		
         // Printing the name n times
		 }
		 for(i=0;i<n;++i){
		 	for(i=0;i<c;++i){
		 		printf("%c",str[i]);
			 }
			 printf("\n");
		 }
	}


int main(){
	
	int n;
	printf("No. of times =");
	scanf("%d",&n);
	printf("Your Name =");
	name(n);
	
	
	return 0;
}
