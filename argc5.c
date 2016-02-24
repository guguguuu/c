#include<stdio.h>

char c[6][4] = {"abc", "哥", "fff", "iii", "iii", "ppp"};   
char (*p)[4];
int i;
int main()
{
	p=c;    
	printf("%d, %d, %d,%d", *(*(p+1)+0),*(*(p+1)+1),*(*(p+1)+2),*(*(p+1)+3)); 
}
