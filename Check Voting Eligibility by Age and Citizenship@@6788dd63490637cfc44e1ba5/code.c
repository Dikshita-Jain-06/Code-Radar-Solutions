#include <stdio.h>
void main()
{
    int age,citizen;
    scanf("%d  %d",&age,&citizen);
    if(age>=18 && citizen == 1){
        printf("Eligible\n");
    }
    else{
        printf("Not Eligible");
    }
}