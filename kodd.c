#include<stdio.h>
int main()
{
    int n,k,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n%3==0)
        {
            printf("odd");
        }
        else
        {
            printf("\n even");
        }
    }
    return 0;
}
