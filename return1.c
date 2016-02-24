#include<stdio.h>

void getfoo(int *a, int *b);
int main(){
	int a,b;
	getfoo(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}

void getfoo(int *a, int*b){
	*a=100;
	*b=2;
}
		
