#include <stdio.h>
void main()
{
    int a,b,d;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    if(ch=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if(ch=='-'){
        printf("%d",a-b);
    }
    else if(ch=='*'){
        printf("%d",a*b);
    }
    else if(ch=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
}