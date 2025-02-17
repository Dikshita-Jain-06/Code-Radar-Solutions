#include <stdio.h>
void main()
{
    int num,shift,result=0;
    scanf("%d  %d",&num,&shift);
    result = num>>shift;
    printf("%d",result);
}