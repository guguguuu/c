#include<stdio.h>
#define SIZE 8
void bubble(int *arr, int size);
int main(int argc, char* args[]){
	int m;
	int arry[SIZE]={8,7,6,5,4,3,2,1};
	bubble(arry,SIZE);
	for(m=0;m<SIZE;m++){
		printf("%d\n",arry[m]);
	}
}

void bubble(int *arr,int size){

	int temp,i,j;
	temp=0;
	for(j=0;j<size-1;j++){
		for(i=0;i<size-1-j;i++){
			if (arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}
