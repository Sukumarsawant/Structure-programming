
#include <stdio.h>
#include <math.h>


int main() {

    //alt = -0.12t4 + 12t3- 380t2 +4100t + 220
    int st ,it,et;
    float alt, vel,i,t ;
    printf("Enter the start time (in hrs) = ");
    scanf("%d",&st);
    printf("Enter the Increament time (in min) = ");
    scanf("%d",&it);
    printf("Enter the end time (in hrs) = ");
    scanf("%d",&et);
     if (st < 0 || et > 48 ) {
        printf("Invalid input. \n");
        return 0;
    }
    printf("time(in min)\taltitude\tvelocity\n");
    printf("---------\t--------\t--------\n");
    
   
    for( i =st; i<=et ; i+=it/60.){
        t = i;
        //th = tmin/60
        alt = (-0.12*(pow(t,4)) + 12*(pow(t,3))- 380*(i*i) +4100*t + 220);
        vel = ((-0.48 * pow(t, 3)) + (36 * pow(t, 2)) - (760 * t) + 4100)/3600.;
printf("%f\t\t%.2f\t\t%.2f\n",round(t*60),alt,vel);
    }
    
}
    
