#include <stdio.h>
void main(){
    int a,b,c;
    float avg=0;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}