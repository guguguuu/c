#include<stdio.h>
#include<string.h>
#define LEN 20

struct namect{
	char fname[LEN];
	char lname[LEN];
	int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
int main(void){
	struct namect person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	return 0;
}

void getinfo(struct namect *ptr){
	puts("enter your name:");
	gets(ptr->fname);
	puts("enter your last name:");
	gets(ptr->lname);
}

void makeinfo(struct namect *ptr){
	ptr->letters=strlen(ptr->fname)+strlen(ptr->lname);
}

void showinfo(const struct namect *ptr){
	printf("%s %s %d\n",ptr->fname,ptr->lname,ptr->letters);
}

//gets is deperated
