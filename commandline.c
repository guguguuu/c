#include<stdio.h>

int main(int argc, char* argv[]){
	int count;
	for(count=0;count<argc;count++){
		printf("%d     %s\n",count,argv[count]);
	}
}

