#include<stdio.h>

int main(int argc, char* argv[]){
	//argument count and argument vector
	int quarters =2;
	int regions=5;

	double sales[regions][quarters];
	sales[0][0]=1.00000004;
	printf("%f\n",sales[0][0]);
	printf("%a\n",sales[0][0]);
	printf("%g\n",sales[0][0]);
	printf("%A\n",sales[0][0]);
	printf("%G\n",sales[0][0]);
	printf("%e\n",sales[0][0]);
}

