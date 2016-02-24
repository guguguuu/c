#include<stdio.h>

struct film{
	char title[TSIZE];
	int rating;
};

struct file{
	char title[TSIZE];
	int rating;
}
int main(void){
	struct film movies[FMAX];
		int i=0;
		int j;

		while(i<FMAX && gets(movies[i].title!=NULL && movies[i].title[0]!='\0')){// title string is not 0. fmax =5
			// 
			puts();
			scanf("%d",&movies[i++].rating);
			while(getchar()!='\n')
				continue;
			puts();
		}
		if(i==0)
			printf();
		else
			printf();

		for(j=0;j<i;j++){
			printf("%s%d", movies[j].title, movies[j].rating);
		}
		puts();
		return 0;
}

