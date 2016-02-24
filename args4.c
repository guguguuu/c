#include<stdio.h>

int main(){
	int i;
	char* p[6]={"a","b","c","d","e","f"};
	for(i=0;i<6;i++){
		printf("%s  ",p[i]);
		printf("%p  ",p[i]);
	}
}
