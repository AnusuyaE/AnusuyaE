#include<stdio.h>
int main()
{
    char str[30];
    int count,i;
    printf("enter the string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
        count++;
        }
    }
    printf("the number of words%d",++count);
    
}
