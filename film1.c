#include<stdio.h>
#define TSIZE 45
#define FMAX 5
struct film{
	char title[TSIZE];
	int rating;
};

int main(void){
	struct film movies[FMAX];
	int i=0;
	int j;

	puts("enter first movie title:");
	while(i<FMAX && gets(movies[i].title)!=NULL && movies[i].title[1]!='\0'){
		puts("enter your rating<0-10>:");
		scanf("%d",&movies[i++].rating);
		while(getchar()!='\n')
			continue;
		puts("enter next movie title");
	}

	if(i==0)
		printf("no data entered");
	else
		printf("here is the movie list\n");

	for(j=0; j<i;j++){
		printf("movie:%s, rating:%d\n", movies[j].title,movies[j].rating);
	}
	puts("bye");
	return 0;
}


		
//inflexible data structure : using an array of structure.
//movies =(struct film *)malloc(n*sizeof(structure));
