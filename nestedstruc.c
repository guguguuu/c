#include<stdio.h>
#define LEN 20

struct names{
	char first[LEN];
	char last[LEN];
};

struct guys{
	struct names handles;
	char jobs[LEN];
	char favfood[LEN];
	float income;
};

int main(void){

	struct guys fellow[2]={
		{{"aa","bb"},
			"student",
			"chips",
			1000.00
		},
		{{"cc","dd"},
		"teacher",
		"patatos",
		2000.00
	}
	};//notice how to initialize......{},
	struct guys * him;

	printf("fellow 1: %p, fellow 2: %p\n", &fellow[0],&fellow[1]);
	
	him=&fellow[0];

	printf("him %p, him+1 %p:\n",him, him+1);
	him++;

	printf("him.income1 : %f, him.income2: %f:\n", him->income, (*him).income);

	printf("him.handle.last: %s, him.job: %s\n", him->handles.last, him->jobs);

	return 0;
}

