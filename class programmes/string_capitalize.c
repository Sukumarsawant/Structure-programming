//capitalize

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	int i =0,ct=0,n;
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
	n = strlen(s);
	for(i=0;i<n ;++i){
		if(s[i]>='a' && s[i]<='z'){
			s[i]-=32;
			
		}
	}
	printf("\n Capitalize string is \n");
	puts(s);
}
