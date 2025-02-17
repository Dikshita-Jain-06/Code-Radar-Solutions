#include <stdio.h>
void main()
{
    int num,shift,result=0;
    scanf("%d  %d",&num,&result);
    result = num>>shift;
    printf("%d",result);
}