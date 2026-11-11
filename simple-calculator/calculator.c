#include <stdio.h>

int main (void) {

    int choice;

    printf("Simple Calculator\n");
    printf("Select one of the following option\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");

    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Add\n");
            break;
        case 2:
            printf("Subtract\n");
            break;
        case 3:
            printf("Multiply\n");
            break;
        case 4:
            printf("Divide\n");
            break;
        case 0:
            printf("Bye!\n");
            break;
        default:
            printf("Invalid choice.");
    }

    return 0;
    
}
