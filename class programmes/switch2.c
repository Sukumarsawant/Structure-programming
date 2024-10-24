#include<stdio.h>
#include<conio.h>	
#include<math.h>
int main(){
	
	float a,b;int menu;
printf("Enter two numbers :");
scanf("%f%f",&a,&b);
printf("1.Addition \n2.Subtraction\n3.Division\n4.Multiplication\n");
scanf("%d",&menu);
switch(menu){
	
	
	case 1: printf("%f",a+b);break;
	case 2: printf("%f",a-b) ;break;
	case 3 : printf("%f",(a/b)); break;//% not for float or double
	case 4: printf("%f",a*b);break ;
	default : printf("INVALID INPUT");
	
}

	
	return 0;
}
