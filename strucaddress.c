#include<stdio.h>
#define FUNDLEN 50

struct bank{
	char bank[FUNDLEN];
	float bankfund;//duplicated...
	char save[FUNDLEN];
	float savefund;
};

double sum(const  struct bank *ptr);//function declaration.

int main(void){

	struct bank bb={
		"ABN",
		1000.00,
		"lalala",
		4002.1//dont put quote around
	};

	printf("%f\n", sum(&bb));//pass the address to sum() function....
	return 0;
}

double sum(const  struct bank *ptr){//when use const
	//struct guys *him, him=&fellow, ptr= &bb.............
	return ptr->bankfund+ptr->savefund;
}

