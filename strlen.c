#include<stdio.h>
#include<string.h>
int main(void){

	int *ch="abcd";
	printf("%s is %d sizeof is %d",ch, strlen(ch),sizeof(int*));
	getchar();
	return 0;
}
