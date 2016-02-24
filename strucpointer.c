#include<stdio.h>
#define LEN 20
struct names{
	char first[LEN];
	char last[LEN];
};

struct pnames{
	char *first;
	char *last;
};

int main(void){
	struct names a;
	struct pnames b;
	puts("enter1:");
	scanf("%s",a.last);
	printf("%p",&a.last);
	puts("enter2\n");
	scanf("%s",b.last);
	printf("%p",&b.last);
	return 0;
}
//if you want a structure to store the strings, use character array members. Storing pointers-to-char has its uses, but has the potential for serious misuse.
//
