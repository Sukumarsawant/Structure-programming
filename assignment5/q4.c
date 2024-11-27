//500 to 1 ---->> prime numbers---->> using func
#include<stdio.h>
#include<conio.h>
int is_prime(int n ){
    int ct =0, i;
    for( i =1 ;i<n;++i){
        if(n%i==0) ct++;

    }
    if(ct==1) return 1;
    else return 0;
}
int main(){
    int ct =500, n;
    while(ct>0){
        if(is_prime(ct)) printf("%d\t",ct);
    

        ct--;
    }
}
