#include<stdio.h>
#include<string.h>
#define NAME "SUCHAN"
#define HOBBY "ANIME LOVER"
#define AGE "17"
#define PLACE "GENSO"
#define LIMIT 65
#define SPACE ' '

void show_n_char(char, int);

int main(int argc, char* argv[]){
	int spaces;

	show_n_char('*',LIMIT);
	putchar('\n');
	show_n_char(SPACE,30);
	printf("%s\n",NAME);
	spaces=(LIMIT-strlen(HOBBY))/2;

	show_n_char(SPACE,spaces);
	printf("%s\n",HOBBY);
	show_n_char(SPACE,(LIMIT-strlen(AGE))/2);
	printf("%s\n",AGE);
	show_n_char(SPACE,(LIMIT-strlen(PLACE))/2);
	printf("%s\n",PLACE);
	putchar('\n');
	show_n_char('*',LIMIT);
	putchar('\n');
	return 0;
}

void show_n_char( char ch, int size){
	int n;
	for(n=1;n<size;n++){
		putchar(ch);
	}
}



