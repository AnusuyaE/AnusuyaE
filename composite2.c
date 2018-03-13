#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%2==0)
        {
            flag=1;
        }
        if(flag==1)
        {
            printf("yes");
        }
    }
    return 0;
}
