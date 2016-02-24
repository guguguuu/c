#include<stdio.h>

int main(int argc, char* argv[]){
	
	int a[][3]={{1,2,3},{4,5,6}};
	int (* pz)[3];
	pz=a;
	printf("pz=%p, pz+1=%p\n",pz,pz+1);
	printf("pz[0]=%p, pz[0]+1=%p\n",pz[0],pz[0]+1);
	printf("*pz=%p, *pz+1=%p\n",*pz,*pz+1);
	printf("pz[0][0]=%d\n",pz[0][0]);
	printf("*pz[0]=%d\n",*pz[0]);
	printf("**pz=%d\n",**pz);
	printf("pz[1][2]=%d\n",pz[1][2]);
	printf("*(*(pz+1)+2)=%d\n",*(*(pz+1)+2));
	printf("*pz=%d\n",**(pz+1));
	printf("*pz=%d",*pz);
}

