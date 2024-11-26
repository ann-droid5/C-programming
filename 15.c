#include <stdio.h>
int main()
{
    int mark;
    printf("Enter the Mark : ");
    scanf("%d", &mark);
    if (mark >= 0 && mark <= 100) {
        if (mark > 90) {
            printf("Grade : A\n");
        } else if (mark > 76) {
            printf("Grade : B\n");
        } else if (mark > 66) {
            printf("Grade : C\n");
        } else if (mark > 55) {
            printf("Grade : D\n");
        } else {
            printf("Failed\n");
        }
    } else {
        printf("INVALID\n");
    }
    return 0;
}