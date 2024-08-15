#include <stdio.h>
#include <stdlib.h>

void choice();
void choice() {
    int choice;
    int newp;
    int account = 0;
    int a = 0, b, c;
    int balance = 0;

    while (1) {
        printf("Hello Customer \nPlease Select the option\n1. Withdraw Cash\n2. Deposit Cash\n3. Send Cash\n4. Change Password\n5. Create account\n");
        scanf("%d", &choice);
        system("clear");

        if (choice == 1) {
            printf("Enter the account number: ");
            scanf("%d", &b);
            printf("Enter the Pin: ");
            scanf("%d", &c);
            if (b == account && c == a) {
                printf("Enter the amount: ");
                int withdraw;
                scanf("%d", &withdraw);
                if (withdraw <= balance) {
                    balance -= withdraw;
                    printf("Withdrawal successful. Current balance: %d\n", balance);
                } else {
                    printf("Insufficient balance.\n");
                }
                printf("Thank you for the service\nPress 1 for the front page of starting\n");
            } else {
                printf("Invalid account number or pin.\n");
            }
        } else if (choice == 2) {
            printf("Enter the account number: ");
            scanf("%d", &b);
            printf("Enter the Pin: ");
            scanf("%d", &c);
            if (b == account && c == a) {
                printf("Enter the amount: ");
                int deposit;
                scanf("%d", &deposit);
                balance += deposit;
                printf("Deposit successful. Current balance: %d\n", balance);
                printf("Thank you for the service\nPress 1 for the front page of starting\n");
            } else {
                printf("Invalid account number or pin.\n");
            }
        } else if (choice == 3) {
            printf("Enter the account number: ");
            scanf("%d", &b);
            printf("Enter the Pin: ");
            scanf("%d", &c);
            if (b == account && c == a) {
                printf("Enter the amount: ");
                int send;
                scanf("%d", &send);
                if (send <= balance) {
                    printf("Enter the recipient's account number: ");
                    int acc;
                    scanf("%d", &acc);
                    balance -= send;
                    printf("Amount sent successfully. Current balance: %d\n", balance);
                    printf("Thank you for the service\nPress 1 for the front page of starting\n");
                } else {
                    printf("Insufficient balance.\n");
                }
            } else {
                printf("Invalid account number or pin.\n");
            }
        } else if (choice == 4) {
            printf("Enter the account number: ");
            scanf("%d", &b);
            if (b == account) {
                printf("Enter the new password: ");
                scanf("%d", &newp);
                a = newp;
                printf("Password changed successfully.\n");
                printf("Thank you for the service\nPress 1 for the front page of starting\n");
            } else {
                printf("Invalid account number.\n");
            }
        } else if (choice == 5) {
            printf("Choose the account number: ");
            scanf("%d", &account);
            printf("Enter the password: ");
            scanf("%d", &a);
            printf("Account created successfully.\n");
            printf("Thank you for the service\nPress 1 for the front page of starting\n");
        } else {
            printf("Wrong input.\n");
        }

        int m;
        scanf("%d", &m);
        if (m != 1) {
            break;
        }
        system("clear");
    }
}

int main() {
    choice();
    return 0;
}