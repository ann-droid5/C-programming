#include <stdio.h>

int main()
{
    int num1,num2,num3,avg=0;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    printf("Enter number 3:");
    scanf("%d",&num3);
    avg=(num1+num2+num3)/3;
    printf("average = %d",avg);
    return 0;
}