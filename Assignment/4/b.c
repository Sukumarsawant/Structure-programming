
#include <stdio.h>
#include <math.h>


int main() {
    
int fs =0; 
float mh ,x ;
x = 3600./5280; // 1f/s in mh/hr
printf("feet/sec\tmiles/hr\n");
printf("--------\t--------\n");
while(fs<=100){
    
    mh = fs*x ;
    
    printf("%d\t\t%.2f\n",fs,mh);
    fs+=5;
}

	

}

