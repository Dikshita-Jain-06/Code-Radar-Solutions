#include <stdio.h>
int fibonacci(int n){
    int a=0,b=1,next;
    for (int i=0;i<n;i++){
        printf("%d",a);
        next=a+b;
        b=next;
    }
    printf("\n");
}
int fibonacci_main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacci(n);
    return 0;
}