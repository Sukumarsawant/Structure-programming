#include<stdio.h>
#include<math.h>

int main(){
    int n ,i,temp;
    int max = 0;
    printf("Enter the nummber of time batted in ODI matches  = ");
    scanf("%d",&n);
    printf("Enter the runs you scored = ");
    for(i=0 ; i< n ; ++i){
        scanf("%d",&temp);
        if(temp>max) max = temp ;
    }
    printf("Higest score is %d ",max);
}
