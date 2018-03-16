#include<stdio.h>
int main(void)
{
    int a[1000],limit,i,j,temp;
    printf("enter the element");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=limit;i++)
    {
        for(j=1;j<=limit;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       
    }
        printf("%d",a[limit/2]);
}

    
