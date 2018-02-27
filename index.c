#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    printf("\n enter th array");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("\n the array is:");
    for(j=0;j<n;j++)
    {
        printf("%d %d",a[i],i);
    }
    return 0;
}
