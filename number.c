#include<stdio.h>
int main()
{
    int a[10],i,n,sum,avg;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum%n;
    return 0;
}
