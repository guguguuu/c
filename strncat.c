#include<stdio.h>
#include<string.h>
#define SIZE 100
#define BUGSIZE 13

int main(void){

	char flower[SIZE];
	char add[]="123456789010203040506070809";
	char bug[BUGSIZE];
	int size;
	
	puts("whats your favorite flower?");
	gets(flower);
	if(strlen(flower)+strlen(add)+1<=SIZE){
	strcat(flower,add);
	}
	puts(flower);

	puts("what's your favorate bug?");
	gets(bug);
	size=BUGSIZE-strlen(bug)-1;
	strncat(bug,add,size);
	puts(bug);

	return 0;
}

