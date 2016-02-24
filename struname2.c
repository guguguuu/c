#include<stdio.h>
#include<string.h>//dont forget using string.h..
#define LEN 20

struct namect{
	char fname[LEN];
	char lname[LEN];
	int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);

int main(void){

	struct namect person;

	person=getinfo();
	person=makeinfo(person);//person======
	showinfo(person);
	return 0;
}

struct namect getinfo(){
	struct namect temp;//construct a new struct
	puts("fname:");
	gets(temp.fname);
	puts("lname");
	gets(temp.lname);
	return temp;//return temp
}

struct namect makeinfo(struct namect info){
	info.letters=strlen(info.fname)+strlen(info.lname);
	return info;//return info
}

void showinfo( struct namect info){
	printf("%s %s %d\n", info.fname, info.lname, info.letters);
}
//Typically, programmers use structure pointers as function arguments for reasons of efficiency, using const when needed to protect data from unintended changes. Passing structures by value is the most often done for structure that are small to begin with.
