#include<stdio.h>
void main()
{
    int i,num,rev;
    printf("ente the number");
    scanf("%d",&num);
    while(num!=0)
    {
        rev=rev*10;
        rev=rev+num%10;
        num=num/10;
    }
    printf("the reverse num %d",rev);
    return 0;
}
