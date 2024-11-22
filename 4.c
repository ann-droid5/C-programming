#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    
    printf("a=%d,b=%d\n", a,b);
    temp=a;
    a=b;
    b=temp;
    
    printf("a=%d,b=%d", a,b);
    return 0;
}