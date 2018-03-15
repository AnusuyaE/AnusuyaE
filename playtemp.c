#include<stdio.h>
int main(void)
{
    int n,a[10],temp,i,j;
    printf("\n enter the string");
    scanf("%d",&n);
    printf("\n enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the 2nd smallest element %d",a[1]);
}
