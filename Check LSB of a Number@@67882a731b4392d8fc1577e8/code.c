#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}