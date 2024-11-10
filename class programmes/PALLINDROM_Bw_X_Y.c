// write a program to display pallindrome number between x and y
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,n,ncopy,nrev=0,i;
    scanf("%d%d",&x,&y);
    for( i = x; i<= y;++i){
        nrev =0 ;
        n= i ; 
        ncopy = n ; 
        while(n>0){
            nrev = nrev*10 + (n%10);
            n/=10;
        }
        if(nrev==ncopy) printf("%d\t",nrev);
        
    }
}
