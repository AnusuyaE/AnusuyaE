#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("enter the element");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       
    }
     i=i%2;
        printf("%d",a[i]);
return 0;
}
