#include <stdio.h>

int main()
{

    int choice, amt;

    printf("Select your preferred language:\n");
    printf("1) English\n");
    printf("2) Hindi\n");
    printf("3) Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("1) Check balance\n");
        printf("2) Withdraw\n");
        printf("3) Diposit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Balance: !!!!");
            break;
        case 2:
            printf("Enter amount: ");
            scanf("%d", &amt);

            printf("%d amount withdrawn !!", amt);
            break;
        case 3:
            printf("Enter amount: ");
            scanf("%d", &amt);

            printf("%d amount diposited !!", amt);
            break;
        default:
            printf("Invalid choice...");
        }

        break;
    case 2:
        break;
    case 3:
        break;
    default:
        printf("Invalid choice...");
    }
}