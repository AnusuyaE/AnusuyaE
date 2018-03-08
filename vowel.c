#include<stdio.h>
int main()
{
    char str[10];
    int i,flag;
    printf("enter the string");
    scanf("%s",&str[i]);
    while(str[i]!='\0')
    {
    if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
    {
        flag=1;
        i++;
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
