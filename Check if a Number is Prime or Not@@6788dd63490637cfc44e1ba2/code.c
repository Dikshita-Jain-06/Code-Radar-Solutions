#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i!=0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
}