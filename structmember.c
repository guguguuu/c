#include<stdio.h>
#define FUNDLEN 50
struct bank{
	char bank[FUNDLEN];
	float bankfund;
	char save[FUNDLEN];
	float savefund;
};
double sum(double, double);

int main(void){

	struct bank bb={
		"ABN-BANK",
		1000.00,
		"LALALA",
		2000.25
	};


	printf("%f\n,",sum(bb.bankfund,bb.savefund));
	
	return 0;
}

double sum(double x, double y){

	return x+y;
}

