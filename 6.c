#include <stdio.h>

int main()
{
    int num1,num2,num3,max;
    printf("Enter a num:");
    scanf("%d",&num1);
    printf("Enter a num:");
    scanf("%d",&num2);
     printf("Enter a num:");
    scanf("%d",&num3);
    
    max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;
    printf("Largest of 3 numbers = %d",max);
    return 0;
}