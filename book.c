#include<stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book library;
	printf("please enter the book title\n");
	gets(library.title);
	printf("now enter the author\n");
	gets(library.author);
	printf("now enter the value\n");
	scanf("%f",&library.value);
	printf("%s by %s : $%.2f\n",library.title,library.author,library.value);
	printf("%s: \"%s\" ($%.2f)\n",library.author,library.title,library.value);
	return 0;
}
