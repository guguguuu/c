#include<stdio.h>
#define COLS 4

int sum(int *ar,int n);
int sum_2d(int ar[][COLS],int n);
int main(int args, char* argv[]){
	int tot1,tot2,tot3;
	int *ptr1;
	int (* ptr2)[COLS];
	//notice!!!
	ptr1=(int [2]){10,20};//pointer!!!!!!
	ptr2=(int [2][COLS]){{1,2,3,4},{5,6,7,8}};
	//int *ptr3=(int []){1,2,3,4,5,6};

	tot1=sum(ptr1,2);
	tot2=sum_2d(ptr2,2);
	tot3=sum((int []) {1,2,3,4,5,6},6);
	printf("%d\n", tot1);
	printf("%d\n", tot2);
	printf("%d\n", tot3);

	return 0;
}
int sum(int *ar, int n){
	int i,tot;
	tot=0;
	for(i=0;i<n;i++)
		tot +=ar[i];
	return tot;
}
int sum_2d(int ar[][COLS], int n){
	int i,j,tot;
	tot=0;
	for(i=0;i<n;i++){
		for(j=0;j<COLS;j++){
			tot += ar[i][j];
		}
	}
	return tot;
}

