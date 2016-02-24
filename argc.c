#include<stdio.h>

int main(int argc, char* argv[]){
	int n,m;
	n=3;
	m=3;
	printf("%d\n",n--);
	printf("%d\n",--m);
	printf("%d\n",argc);
	while(argc)
		printf("%d\n,%s\n,zaizheli%p\n,%p\n,%p\n,%p\n",argc,argv[--argc],&*(argv+2),argv,argv+1,argv+2);//why use --argc
	printf("%p\n,%p\n,%p\n,%p\n,%p\n,%p\n",argv,argv+1,argv+2,&argv,&argv+1,&argv+2);

	return 0;
}
