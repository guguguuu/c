#include<stdio.h>
void swap(int* x, int* y);
int main(int argc, char* argv[]){
	int x=5, y=10;
	swap(&x,&y);
	printf("main:x=%d,y=%d\n",x,y);
}
void swap(int* xa,int* ya){

	int tmp;

	tmp=*xa;
	*xa=*ya;
	*ya=tmp;
	printf("x=%d,y=%d\n",*xa,*ya);
}

