#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],t;
    int l;
    printf("enter the string");
    gets(a);
    l=strlen(a);
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<=l;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=a[i];
            }
        }
        for(int i=0;i<=l;i++)
        printf("%s",a[i]);
    }
    return 0;
}

