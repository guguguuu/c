#include<stdio.h>
#define ROWS 3
#define COLS 3
void bubble(int rows, int cols, int ar[*][*],int size);
int main(int argc, char*argv[]){

	int array[ROWS][COLS]={{9,8,7},{6,1000,4},{3,2,99991}};
	bubble(ROWS,COLS,array,ROWS*COLS);
}
void bubble(int rows, int cols, int ar[rows][cols],int size){
	int i,j,temp,m,k;
	int* pa=ar[0];//ar has two addresses and ar[0] has 1..
	temp=0;

	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(pa[j]>pa[j+1]){
				temp=pa[j];
				pa[j]=pa[j+1];
				pa[j+1]=temp;
			}
		}
	}
	for(m=0;m<rows;m++){
		for(k=0;k<cols;k++){
			printf("%d ",ar[m][k]);
		}
		printf("\n");
	}
}

