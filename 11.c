#include <stdio.h>

int main() {
    float kilometers, miles;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    miles = kilometers * 0.621371;
    printf("%f kilometers is equal to %f miles.", kilometers, miles);
    return 0;
}