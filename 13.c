#include <stdio.h>

int main() {
    int a, b, sum, difference, product, quotient,choice=0;


    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sum = a + b;
                printf("Result: %d\n", sum);
                break;
            case 2: 
                difference = a - b;
                printf("Result: %d\n", difference);
                break;
            case 3:
                product = a * b;
                printf("Result: %d\n", product);
                break;
            case 4:
                quotient = a / b;
                printf("Result: %d\n", quotient);
                break;
            case 5: 
                printf("Exiting the program.\n");
                return 0;
            default: 
                printf("Invalid choice! Please try again.\n");
            }
        }
    

    return 0;
}
