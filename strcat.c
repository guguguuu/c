#include<stdio.h>
#include<string.h>

int main(void){

	char flower[20];
	puts("1whats your favorate flower?");
	gets(flower);
	char * ptr;
	char shoes[]="123456789010203040506070809";
	ptr = strcat(flower, shoes);
	puts(ptr);
	puts(flower);//aa123456789010203040506070809 overflow!
	puts(shoes);//shoes becomes5060708090...
	puts("\n");

	return 0;
}


