#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n & (1<<31)) {
        printf("Set");
    }
    else{
        printf("Not Set")
    }
}