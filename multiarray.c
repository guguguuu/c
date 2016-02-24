#include<stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows(int ar[][COLS], int rows);
void sum_cols(int ar[][COLS], int rows);
int sum_2d(int (* ar)[COLS], int rows);

int main(int argc, char* argv[]){
	int junk[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}};

	sum_rows(junk,3);
	sum_cols(junk,3);
	printf("sum is %d\n",sum_2d(junk,3));
//	sum_2d(junk,3);
	return 0;
}

void sum_rows(int ar[][COLS], int rows){

	int r,c,tot;
	for(r=0;r<ROWS;r++){
		tot=0;
		for(c=0;c<COLS;c++){
			tot += ar[r][c];
		}
			printf("row %d is %d\n",r,tot);
	}
}

void sum_cols(int ar[][COLS], int rows){
	
	int r,c,tot;
	for(c=0;c<COLS;c++){
		tot=0;
		for(r=0;r<ROWS;r++){
			tot += ar[r][c];
		}
			printf("col %d is %d\n",c,tot);
	}
}

int sum_2d(int (* ar)[COLS],int rows){

	int r,c,tot;
	tot=0;//notice!!else, sum will be garbage

	for(r=0;r<ROWS;r++){
		for(c=0;c<COLS;c++){
			tot += ar[r][c];
		}
	}
	return tot;
//			printf("col %d is %d\n",c,tot);
	
}

