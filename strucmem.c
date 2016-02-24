#include<stdio.h>
#define FUNDLEN 50

struct bank{
	char bank[FUNDLEN];
	float bankfund;
	char save[FUNDLEN];
	float savefund;
};

double sum(struct bank);

int main(void){

	struct bank bb={
		"aa",
		1000.00,
		"bb",
		200.30
	};
//sum(bb.bankfund+bb.savefund);
	printf("%f\n", sum(bb));
	return 0;
}

double sum(struct bank bb){
	return bb.bankfund+bb.savefund;
}

