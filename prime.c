#include<stdio.h>
int main()
{
    int i,a,count=0;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
            count++;
        if(count==1)
            printf("\n prime");
        else
            printf("\n not prime");
    }
}
