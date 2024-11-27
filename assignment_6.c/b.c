//pallindrome
#include<stdio.h>
#include<conio.h>


int rev(int n,int sum ){
    
    if(n>0) {
        sum*=10;
        sum+=n%10;
        return rev(n/10,sum);
        
 
    } 
}

int main(){
int a,b,sum,i;
a=10;b=100;
for( i =10 ; i<=1000;++i){
    sum=0;
    //  printf("%d\t",sum);
 sum =rev(i,sum );
    if(sum ==i){
        printf("%d\t",sum);
    }
}
}
