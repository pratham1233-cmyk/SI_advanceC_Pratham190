#include <stdio.h>

int main()
{
    int ProductID[] = {101, 102, 103, 104, 105};
    int Product_Qty[] = {10, 20, 30, 40, 50};

    int choice;

    do
    {
        printf("\n\t---------------TRENDS INVOICE----------------\n");

        printf("1. STOCK AVAILABILITY\n");
        printf("2. PURCHASE ITEMS\n");
        printf("3. CHECKOUT & EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Product ID\tQuantity\n");

            for (int i = 0; i < 5; i++)
            {
                printf("%d\t\t%d\n", ProductID[i], Product_Qty[i]);
            }
        }
         if (choice == 2)
        {
            int product_id, quantity;

            printf("Enter Product ID: ");
            scanf("%d", &product_id);

            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            int index = 0;

            for (int i = 0; i < 5; i++)
            {
                if (ProductID[i] == product_id)
                {
                    index = i;
                    break;
                }
            }

            if (index != 0 || ProductID[0] == product_id)
            {
                if (Product_Qty[index] >= quantity)
                {
                    Product_Qty[index] -= quantity;
                    printf("Purchase Successful!\n");
                }
                else
                {
                    printf("Insufficient Stock!\n");
                }
            }
            else
            {
                printf("Invalid Product ID!\n");
            }
        }
        else if (choice == 3)
        {
            printf("Thank You For Shopping With Us!\n");
        }
        else
        {
            printf("Invalid Choice!\n");
        }

        if (choice == 1)
        {
            printf("Product ID\tQuantity\n");

            for (int i = 0; i < 5; i++)
            {
                printf("%d\t\t%d\n", ProductID[i], Product_Qty[i]);
            }
        }
         if (choice == 2)
        {
            int product_id, quantity;

            printf("Enter Product ID: ");
            scanf("%d", &product_id);

            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            int index = 0;

            for (int i = 0; i < 5; i++)
            {
                if (ProductID[i] == product_id)
                {
                    index = i;
                    break;
                }
            }

            if (index != 0 || ProductID[0] == product_id)
            {
                if (Product_Qty[index] >= quantity)
                {
                    Product_Qty[index] -= quantity;
                    printf("Purchase Successful!\n");
                }
                else
                {
                    printf("Insufficient Stock!\n");
                }
            }
            else
            {
                printf("Invalid Product ID!\n");
            }
        }
        else if (choice == 3)
        {
            printf("Thank You For Shopping With Us!\n");
        }
        else
        {
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}