#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("******** Food Menu ********\n");
    printf("1. Burger - 50Rs\n");
    printf("2. Pizza  - 90Rs\n");
    printf("3. Pasta  - 120Rs\n");
    printf("4. Coke   - 20Rs\n");
    printf("***************************\n");
}

int main() {
    int choice, quantity, totalBill = 0, price;
    char more;

    do {
        displayMenu();  // Display available food items
        printf("Enter the choice of the item you want to order: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                price = 50;
                printf("You selected Burger. Enter quantity: ");
                break;
            case 2:
                price = 90;
                printf("You selected Pizza. Enter quantity: ");
                break;
            case 3:
                price = 120;
                printf("You selected Pasta. Enter quantity: ");
                break;
            case 4:
                price = 20;
                printf("You selected Coke. Enter quantity: ");
                break;
            default:
                printf("Invalid choice. Please select again.\n");
                continue;
        }

        scanf("%d", &quantity);  // Take the quantity from the user
        totalBill += price * quantity;  // Calculate the bill
        printf("Your current total bill is: %d Rs\n", totalBill);

        // Ask if the user wants to add more items
        printf("Do you want to order more items? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    // Display the final bill
    printf("\n******** Final Bill ********\n");
    printf("Total amount to be paid: %d Rs\n", totalBill);
    printf("****************************\n");

    return 0;
}
