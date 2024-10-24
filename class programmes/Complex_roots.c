//write a program to calculate  the roots of the quadratifc equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b,c;
	float d,r1,r2,real,img;
	printf("Write the value of a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	d= b*b-(4*a*c);
	r1= (-b+sqrt(d))/(2*a);
	r2= (-b-sqrt(d))/(2*a);
	if(d>0)
	{
		printf("The roots are real and unequal = r1=%f and r2=%f",r1,r2);
	}
	else if(d==0){
		printf("The roots are real and equal = r1=r2 = %f",r1);
	}
	else {
		//a=2*a;
	//printf ("The roots are not real(complex) = -%d+root(%d)i/(%d) & -%d-root(%d)i/(%d)",b,d,a,b,d,a);
	real = -b/(2*a);
	img = sqrt(-d)/(2*a);
	printf("The roots are complex and conjugate and they are = %f + i (%f) & %f - i (%f) ",real,img,real,img);
}
	
	return 0;
}
