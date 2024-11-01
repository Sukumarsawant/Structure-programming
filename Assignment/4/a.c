
#include <stdio.h>
#include <math.h>


int main() {
	float total_area = 14000,  uncut_area = 2500 ;
	float ref_rate = 0.02;
	float forested  ;
	int ct = 20 ,i;
        printf("number of acres forested at the end of : \n");
	for(i =0 ; i< ct ;++i){
	    uncut_area += (ref_rate)*uncut_area;
	    forested = total_area - uncut_area;
	    printf("Year %d has %.2f acres forested\n",i+1,forested);
	}
	

}

