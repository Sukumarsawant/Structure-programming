#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int v,w,tw,fw;
    printf("Enter the total number of vehicles =");
    scanf("%d",&v);
    printf("Enter the total number of wheels =");
    scanf("%d",&w);
    if(w%2==0 && w>=2 && v<w){
        //eqn we can form are x+y=V ( x= tw and y = fw)
        // 2x +4y = W
        //solving the eqn we get x = 2v-w/2 aur y = (w-2v)/2
        tw=2*v-w/2;
        fw = (w-2*v)/2;
        if(tw>0 && fw>0) printf("TW = %d  FW= %d ",tw,fw);
        else printf("INVALID INPUT");
    }
    else printf("INVALID INPUT");
    return 0;
}