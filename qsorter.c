#include<stdio.h>
#include<stdlib.h>
#define NUM 40
void fillarray(double * ar, int n);
void showarray(const double * ar, int n);
int  comp(const void * p1, const void * p2);
int main(int argc, char * argv[]){
	double array[NUM];
	fillarray(array,NUM);
	printf("Random list:\n");
	showarray(array,NUM);
	qsort(array,NUM,sizeof(double),comp);
	printf("Sorted list:\n");
	showarray(array,NUM);
	return 0;
}
void fillarray(double * ar, int n){
	int index;
	for(index=0;index<n;index++){
		ar[index]=(double)rand()/((double)rand()+0.1);
	}
}
void showarray( const double * ar, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%9.4f",ar[i]);
		if(i%6==5){
			putchar('\n');
		}
	}	if(i%6!=0){
		putchar('\n');
	}
}
int comp(const void *p1,const void *p2){
	//const double * a =p1;
	//const double * b =p2;
	//if(*a>*b){// if *a<*b sorted by increasing value.return *(double*)p1-*(double*)p2;
	//	return -1;
	//}else if(*a==*b){
	//	return 0;
	//}else{
	//	return 1;
	//}
	const double*a=p1;
	const double *b=p2;
	//printf("%9.4f ",*(double*)a);
	return *((double*)p1)-*(double*)p2;
}
