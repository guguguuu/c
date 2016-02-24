#include"stdio.h"
#include"inttypes.h"
#define SIZE 3
#define LEFT 0
#define RIGHT SIZE-1 
void qsort(int *ar, int left, int right);
void print(int *a, int size);
main(int argc, char* argv[]){
	int i=0;
	int8_t m=128;
	printf("%d",m);
	int array[SIZE]={3,2,1};
	qsort(array,LEFT,RIGHT);	
	print(array,SIZE);
	return 0;
}
void qsort(int *ar, int left,int right){
	int i=left;
	int j=right;
	int k=ar[left];
	if(left>=right){
//		printf("l:%d r=%d \n",left,right);
		printf("l:%d r=%d  %d\n",sizeof(uint32_t),sizeof(uint16_t),sizeof(int8_t));
		return;
	}
	//consider edge.
	while(i<j){
		while(i<j && k<=ar[j]){
			j--;
		}
		ar[i]=ar[j];

		while(i<j && k>=ar[i]){
			i++;
		}
		ar[j]=ar[i];
	}
	ar[i]=k;
	qsort(ar,left,i-1);
	qsort(ar,i+1,right);
}
void print(int *a, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
		printf("\n");
}
