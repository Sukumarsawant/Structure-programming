// Write a program to rotate elements of array in clockwise
// direction by one position. (Right shifting)
#include<stdio.h>
#include<conio.h>
int main()
{
    int n , i ,j,t ,a[100];
    printf("ENTER THE SIZE OF THE ARRAY ");
    scanf("%d",&n);
    printf("Enter the array ");
    for(i =0 ;i<n;++i){
       scanf("%d",&a[i]);
    }

    t=a[n-1];
    for(i =n-1 ;i>0 ; --i){
        a[i]=a[i-1];

    }
    a[0]=t;
    printf("THE RESULTANT ARRAY IS  = \n");
    for(i =0 ;i<n;++i){
        printf("%d\t",a[i]);
    }
}
