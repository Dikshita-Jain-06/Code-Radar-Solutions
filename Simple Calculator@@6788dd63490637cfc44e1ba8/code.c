#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%d",&ch);
    if(ch=='+'){
        printf("%d",a+b);
    }
    else if(ch=='-'){
        printf("%d",a-b);
    }
    else if(ch=='*'){
        printf("%d",a*b);
    }
    else{
        printf("%d",a/b);
    }
}