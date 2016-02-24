#include<stdio.h>

int main(void)
{
	int * ptr, * ptr2;
	int marble[3]={1,2,3};
	ptr=marble;
	ptr2=marble;
	printf("%p   %d    %p\n ",ptr,ptr[0],&ptr);
	ptr++;
	printf("%p   %d    %p \n",ptr,ptr[0],&ptr);
	printf("%p   %d    %p \n",ptr2,ptr2[0],&ptr2);
	ptr2++;
	printf("%p   %d    %p \n",ptr2,ptr2[0],&ptr2);
	ptr--;
	printf("%p   %d    %p\n ",ptr,ptr[0],&ptr);
	ptr2;
	printf("%p   %d    %p \n",ptr2,ptr2[0],&ptr2);
	printf("%d   %d    %p \n",ptr2-ptr,ptr[0],&ptr);
}
