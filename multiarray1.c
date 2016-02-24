#include<stdio.h>
#define ROWS 3
#define COLS 4
#define SIZE 10

void row_sum(int (* ar)[COLS],int rows);
void col_sum(int ar[][COLS], int rows);
int sum(int ar[][COLS],int rows);
int sum1(int *ar, int in);
int main(int args, char* argv[]){

	int junk[ROWS][COLS]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int junk2[7]={1,2,3,4,5,6,7};
	row_sum(junk,ROWS);
	col_sum(junk,ROWS);
	printf("sum is %d\n",sum(junk,ROWS));
	printf("sum of junk2 is %d",sum1(junk2,SIZE));
}

void row_sum(int ar[][COLS], int rows){
	int i,c,tot;
	
	for(i=0;i<ROWS;i++){
		tot=0;
		for(c=0;c<COLS;c++){
			tot += ar[i][c];
		}
		printf("row %d sum is %d\n", i, tot);
	}
}

void col_sum(int ar[][COLS],int rows){
	int i,c,tot;

	for(c=0;c<COLS;c++){
		tot=0;
		for(i=0;i<ROWS;i++){
			tot += ar[i][c];
		}
		printf("col %d sum is %d\n", c, tot);
	}
}

int sum(int ar[][COLS], int rows){
	int i,c,tot;
	tot=0;

	for(i=0;i<ROWS;i++)
		for(c=0;c<COLS;c++)
			tot+=ar[i][c];
	
	return tot;
}

int sum1(int *ar,int b){
	int r, tot;
	tot=0;

	for(r=0;r<SIZE;r++){
		tot +=ar[r];
		printf("%d\n,%d\n,%d\n",r,ar[r],tot);
	}
	return tot;
}
