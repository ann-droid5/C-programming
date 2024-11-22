#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter a num:");
    scanf("%d",&num1);
    printf("Enter a num:");
    scanf("%d",&num2);
    
    if (num1>num2){
        printf("%d is greater",num1);
    }
    else{
        printf("%d is greater",num2);
    }
    return 0;
}