#include <stdio.h>
void main()
{
    int a,b
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    if(ch=='+'){
        printf("%d",a+b);
    }
    else if(ch=='-'){
        printf("%d",a-b);
    }
    else if(ch=='*'){
        printf("%d",a*b);
    }
    else if(ch=='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%f",a/b);
        }
    }
    else{
        printf("error");
    }
}