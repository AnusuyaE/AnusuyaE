#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],t;
    int i,j;
    printf("enter the string");
    scanf("%s",a);
    for(i=0,j=1;(a[i]!='\0'&&a[j]!='\0');i=i+2,j=j+2)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(i=0;a[i]!='\0';i++)
    {
    printf("\n %s",a);
    }
    return 0;
}
    
