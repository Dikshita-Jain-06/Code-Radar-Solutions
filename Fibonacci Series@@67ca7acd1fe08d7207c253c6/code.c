#include <stdio.h>
void fibonacci(int n){
    int a=0,b=1,next;
    for (int i=0;i<n;i++){
        scanf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 1;
    }
    fibonacci(n);
    return 0;
}