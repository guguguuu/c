#include<stdio.h>
int main(){
int i;
char* pch[6] = {"q","e","r","t","y","u"};
for(i=0;i<6;i++)
{
printf("%s, ",pch[i]);
}
printf("\n");
for(i=5; i>=0; i--)
{
printf("%s\n",pch[i]);
}
}
