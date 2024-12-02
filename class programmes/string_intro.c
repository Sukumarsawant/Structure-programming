#include<stdio.h>
#include<conio.h>
#include<string.h> //// new header 

int main(){
	int i =0,ct=0;
	char s[100];
	printf("Enter your name\n");
	
	//scanf("%s",&s);
	gets(s);
	printf("Good morning  ");
	
	puts(s);
	printf("\n");
//	while(s[i]!='\0'){
//		i++;
//		ct++;
//	}
	printf("size is %d",strlen(s));
}
