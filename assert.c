#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#ifdef NOZ
#	define NDEBUG //place this macro to ignore assert(z>=0)
#	include<assert.h>
#else 
#	include<assert.h>
#endif
int main(void){

	double x, y;

	double z;

	while(scanf("%lf%lf",&x,&y)==2){
		z=x*x-y*y;
		assert(z<=11.5);
		printf("%lf\n",sqrt(z));
		puts("next pair of numbers:");
	}
	
}



