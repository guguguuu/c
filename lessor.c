#include<stdio.h>

int nmin();
int main(void){
	int a,b;
	while(scanf("%d,%d",&a,&b)==2){//split with ,
		printf("a=%*d,b=%d min=%d\n",a,b,nmin(a,b));
		printf("a=%*d",a);
	}
	
	printf("bye\n");
	return 0;
}

int nmin( m, n){
	return (n<m)?n:m;
}
