#include<stdio.h>
#define COLS 3

void sum(int *ar, int cols);//ar is pointer-to-int

int main(int argc, char*********argv[]){

	int junk[COLS]={1,2,3};
	sum(junk,COLS);
	return 0;
}

void sum(int ar[], int cols){

	int i, tot;
	tot=0;

	for(i=0;i<COLS;i++){
		tot +=ar[i];//shabi ba i xiecheng COLS le !
	}
	printf("%d\n",tot);
}
