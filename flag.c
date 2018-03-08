#include<stdio.h>
int main()
{
    char str[10];
    int i,flag=0;
    printf("enter the string");
    scanf("%d",&str[i]);
    i=0;
    while(str[i]!='\0')
    {
        if((str[i]='0')||(str[i]='1'))
        {
            flag=1;
        }
        if(flag==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    return 0;
}

