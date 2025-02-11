#include <stdio.h>
void main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    int bitValue = (num>>n)&1;
    printf("%d\n",bitValue);
}