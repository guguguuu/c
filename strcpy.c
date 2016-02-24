#include<stdio.h>
#include<string.h>
#define WORDS "beast"
#define SIZE 40

int main(void){

	char *a=WORDS;
	char copy[SIZE]=" bbbbbbbbbbbbbbbbb";
	char * ps;
	puts(a);
	puts(copy);
	ps=strcpy(copy+7,a);
	puts(copy);
	puts(ps);
	return 0;
}

