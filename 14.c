#include <stdio.h>
int main() {
    int hr,min;
    printf("Enter hours: ");
    scanf("%d", &hr);
    
    min=hr*60;
    printf("%d Hour = %d Minutes",hr,min);

    return 0;
}

