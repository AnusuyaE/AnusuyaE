#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[10],b[10],strcmp;
    int i,n,m,c=0;
    printf("\n enter the 1 string");
    scanf("%s",&a);
    printf("\n enter the 2 string");
    scanf("%s",&b);
    n=strlen(a);
    m=strlen(b);
    if(m!=n)
    {
        printf("they are not equal");
    }
    else
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(b[i]=a[i])
            {
                c+=1;
            }
        }
            if(c=m)
            {
                printf("they are equal string");
            }
        
    }
}
