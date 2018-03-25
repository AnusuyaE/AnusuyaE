#include<stdio.h>
int main()
{
    int a[10],n,k,i,flag=0;
    char s[20];
    scanf("%s",&s[i]);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        flag=1;
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
