#include <stdio.h>
int main()
{

    char ch;
    float price, totalbill = 0;
    int quantity, foodch;
    do
    {

        printf("\n1. Pizza    price = 180rs/pcs");
        printf("\n2. Burger   price = 100rs/pcs");
        printf("\n3. Dosa     price = 120rs/pcs");
        printf("\n4. Idli     price = 50rs/pcs");
        printf("\nEnter Your Chooice:\t");
        scanf(" %d", &foodch);

        switch (foodch)
        {
        case 1:
            price = 180;
            printf("You Are Selcted Pizza\n");
            break;
        case 2:
            price = 100;
            printf("You Are Selcted Burger\n");
            break;
        case 3:
            price = 120;
            printf("You Are Selcted Dosa\n");
            break;
        case 4:
            price = 50;
            printf("You Are Selcted Idli\n");
            break;

        default:
            printf("\nInvalid Choice...!");
            break;
        }
        printf("\nHow many would you like to  order? ", ch);
        scanf("%d", &quantity);
        printf("\nYou have ordered %d item(s) of this food.\n", quantity);
        totalbill += price * quantity;
        printf("\nCurrent total bill: Rs. %.2f\n", totalbill);

        printf("\n\n Do You Want to Continue y/n ? : ");
        scanf(" %c", &ch);

    } while (ch == 'y');
    printf("\nYour final total bill is: Rs. %.2f", totalbill);
    printf("\nThank you for ordering! Have a great day!\n");
    return 0;
}