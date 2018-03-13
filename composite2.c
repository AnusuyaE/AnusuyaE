#include<stdio.h>
int main()
{
    int i,m,flag=0;
    scanf("%d",&m);
    for(i=2;i<=m;i++)
    {
        if(m%2==0)
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
