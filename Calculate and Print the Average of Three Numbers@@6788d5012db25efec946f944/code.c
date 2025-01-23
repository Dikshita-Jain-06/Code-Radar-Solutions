#include <stdio.h>
void main(){
    int a,b,c;
    float avg;
    scanf("%f %f %f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}