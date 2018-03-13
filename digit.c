#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a b c value");
    scanf("%d%d%d",&a,&b,&c);
    printf("ANS is %d",((a*b)%c));
    return 0;
}
