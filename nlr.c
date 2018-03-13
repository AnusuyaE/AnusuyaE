#include<stdio.h>
int main()
{
    int n,l,r,i;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the limit");
    scanf("%d",&l);
    printf("enter the limit");
    scanf("%d",&r);
    for(i=l;i<=6;i++)
    {
        if(i==n)
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
