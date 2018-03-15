#include<stdio.h>
int main(void)
{
    char a[10];
    int i,n=0;
    printf("enter the string \n");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        n=n+1;
    }
    printf("the length %s is %d.",a,n);
    return 0;
}
