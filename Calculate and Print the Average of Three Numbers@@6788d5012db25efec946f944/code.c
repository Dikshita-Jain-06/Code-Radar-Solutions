#include <stdio.h>
void main(){
    int a,b,c;
    float avg=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}