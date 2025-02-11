#include <stdio.h>
void main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    int updated_num = num & -(1<<n);
    printf("%d\n",updated_num);
}