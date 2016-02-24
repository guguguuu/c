#include<stdio.h>
#define SIZE 10
void bubble1(int ar[], int size);
int main(int argc, char* argv[]){

	int bubble[SIZE]={9,8,7,6,5,4,3,2,1,0};
	bubble1(bubble,SIZE);
	return 0;
}

void bubble1(int *ar, int size){
	int i,j,temp,m;
	temp=0;

	for(j=0;j<size-1;j++){
		for(i=0;i<size-1-j;i++){
			if(ar[i]>ar[i+1]){
				temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
			}
		}
	}
	for(m=0;m<size;m++){
		printf("%d\n",ar[m]);
	}
}




