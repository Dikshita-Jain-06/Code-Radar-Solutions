#include <stdio.h>
void main()
{
    int a,b;
    char ch;
    scanf("%d%d%c",&a,&b,&c);
    if(ch=='+'){
        printf("%d",a+b);
    }
    else if(ch=='-'){
        printf("%d",a-b);
    }
    else if(ch=='/'){
        if(b==0){
            printf("error");
        }
        else if(a%b==0){
            printf("%d",a/b);
        }
    }
    else if(ch=='*'){
        printf("%d",a*b);
    }
    else{
        printf("error");
    }
}