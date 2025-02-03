#include <stdio.h>
void main()
{
    int a,b,d,e;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    if(ch=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if(ch=='-'){
        e=a-b;
        printf("%d",e);
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