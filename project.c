#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;
    char again;

    printf("===== ONLINE FOOD ORDER SYSTEM =====\n");

    do {
        printf("\n--- MENU ---\n");
        printf("1. Pizza      - Rs.250\n");
        printf("2. Burger     - Rs.120\n");
        printf("3. Pasta      - Rs.180\n");
        printf("4. Sandwich   - Rs.100\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch(choice) {
            case 1:
                total += 250 * qty;
                break;
            case 2:
                total += 120 * qty;
                break;
            case 3:
                total += 180 * qty;
                break;
            case 4:
                total += 100 * qty;
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\n==============================");
    printf("\nTotal Bill Amount: Rs. %.2f", total);
    printf("\nThank you for ordering!");
    printf("\n==============================\n");

    return 0;
}
