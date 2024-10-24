#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	char ch;
	printf("Enter the single character ");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') ||(ch>='A' && ch<='z') ){
		
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			printf("It is a vowel");
			
		}
		else printf("It's a consonent");
	}
	else{
		if((ch>='0'&& ch<='9')){
		printf("It's a number");
		}
		else {
			printf("It's a special character");
			}
		
		
	}
	return 0;
}
