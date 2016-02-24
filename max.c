#include<stdio.h>
#define ROWS 3
#define COLS 3


void sort(int rows, int cols, int ar[*][*],int* maxadd,int* minadd);
void main(int argc, char* argv[]){
	int array[ROWS+1][COLS+1]={{100,0,120,0},{14,23,33,99},{24,45,1,0},{2,3,4,6}};
	int max=array[0][0];
	int min=array[0][0];
	printf("before:max=%d,min=%d\n",max,min);
	sort(ROWS,COLS,array,&max,&min);
	printf("after :max=%d,min=%d\n",max,min);
	putchar('\n');
}


void sort(int rows, int cols, int ar[rows][cols], int* maxadd, int* minadd){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(ar[i][j]>*maxadd){
				*maxadd=ar[i][j];
			}
			if(ar[i][j]<*minadd){
				*minadd=ar[i][j];
			}
		}
	}

}

