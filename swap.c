#include<stdio.h>
int main()
{
    int i=60;
    int k=125;
    printf("before swapping the number i=%d k=%d",i,k);
    i=i^k;
    k=i^k;
    i=i^k;
    printf("after swapping the number i=%d,k=%d",i,k);
    return 0;
}
