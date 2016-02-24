#include<stdio.h>
 
char c[][4] = {"aa", "eee", "rrr", "rrr", "rrr", "rrr"};    //因为一个汉字占用两个字节
char (*p)[4];
int i;
void main()
{
    p=c;    //将指针定位于c[0]
    for(i=0;i<=5;i++)
    {
        printf("%c, ", *(p+i));  //或者将*(p+i)替换成*p++
    }
    printf("\n");    
    for(i=5;i>=0;i--)
    {
        printf("%s,",*(p+i));    //或者将*(p+i)替换成*p--
    }
}
