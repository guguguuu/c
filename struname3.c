#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 50
struct name{
	char *fname;
	char *lname;
	int letters;
};

void getinfo( struct name *ptr );
void makeinfo( struct name *ptr );
void showinfo(const struct name *ptr );
void clearinfo( struct name *ptr );

int main(void){

	struct name person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	clearinfo(&person);

	return 0;
}
void getinfo(struct name * ptr){
	char temp[50];
	puts("enter your first name:");
	gets(temp);
	ptr->fname=(char *)malloc(strlen(temp)+1);
	strcpy(ptr->fname, temp);

	puts("enter your last name:");
	gets(temp);
	ptr->lname=(char *)malloc(strlen(temp)+1);
	strcpy(ptr->lname, temp);

}
void makeinfo( struct name *ptr ){
	ptr->letters= strlen(ptr->fname)+strlen(ptr->lname);
}
void showinfo(const struct name *ptr ){
	printf("%s %s %d\n", ptr->fname,ptr->lname,ptr->letters);
}
void clearinfo( struct name *ptr ){
	free(ptr->fname);
	free(ptr->lname);
}


