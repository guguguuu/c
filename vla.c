#include<stdio.h>
#define ROWS 4
#define COLS 3

//int sum(int rows, int cols, int arr[rows][cols]);
int sum(int  ,int , int arr[*][*]);
int main(int argc, char* argv[]){

	int arr[ROWS][COLS]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int iarr[ROWS-1][COLS+3]={{1,2,3,4,5,6},{1,2,3,4,5,6},{7,8,9,10,11,12}};
	int rc=3;
	int sc=5;
	int arr3[rc][sc];

	for(int o=0;o<rc;o++){
		for(int p=0;p<sc;p++){
			arr3[o][p]=o*4+p;
		}
	}

	printf("sum4*3: %d\n", sum(ROWS,COLS,arr));
	printf("sum3*6: %d\n", sum(ROWS-1,COLS+3,iarr));
	printf("sum3*5: %d\n", sum(rc,sc,arr3));
	return 0;
}

int sum(int rows, int cols, int arr[rows][cols]){

	int i,j,tot;
	tot=0;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			tot += arr[i][j];
		printf("%d\n",arr[i][j]);
		}
	}
	return tot;
}

			



	
