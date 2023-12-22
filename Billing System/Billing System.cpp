//Billing System

#include <stdio.h>
#include <stdlib.h>

int choice, quantity, amount = 1, total_amt = 0;
char more;


void menu()
{
    printf("\n-------------- MENU --------------");
    printf("\n1. Pizza      Price = 180rs/pcs");
    printf("\n2. Burder     Price = 100rs/pcs");
    printf("\n3. Dosa       Price = 120rs/pcs");
    printf("\n4. Idli       Price = 50rs/pcs");
    printf("\nPlease Enter your choice : ");
    scanf("%d", &choice);
    order();
}

void order()
{
    switch (choice)
    {
    case 1:
        printf("\nYou have selected Pizza.");

        printf("\nEnter the quantity : "); 
        scanf("%d", &quantity);

        amount = 180 * quantity; 
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount; 
        printf("\nTotal Amount is = %d", total_amt);

        printf("\ndo you want place more order ? y or n : ");
        scanf(" %c", &more);

        more_order(); 

        break;

    case 2:
        printf("\nYou have selected Burger.");

        printf("\nEnter the quantity : "); 
        scanf("%d", &quantity);

        amount = 100 * quantity; 
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount; 
        printf("\nTotal Amount is = %d", total_amt);

        printf("\ndo you want place more order ? y or n : ");
        scanf(" %c", &more);

        more_order(); 

        break;

    case 3:
        printf("\nYou have selected Dosa.");

        printf("\nEnter the quantity : "); 
        scanf("%d", &quantity);

        amount = 120 * quantity; 
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount; 
        printf("\nTotal Amount is = %d", total_amt);

        printf("\ndo you want place more order ? y or n : ");
        scanf(" %c", &more);

        more_order(); 

        break;

    case 4:
        printf("\nYou have selected Idli.");

        printf("\nEnter the quantity : "); 
        scanf("%d", &quantity);

        amount = 50 * quantity;
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount; 
        printf("\nTotal Amount is = %d", total_amt);

        printf("\ndo you want place more order ? y or n : ");
        scanf(" %c", &more);

        more_order(); 

        break;

    default:
        printf("Please Enter number as per menu... Do you want to place order? y or n : ");
        scanf(" %c", &more);

        more_order();

        break;
    }
}


void more_order()
{
    
    if (more == 'y')
    {
        menu();  
        order(); 
    }
    else if (more == 'n')
    {
        printf("\nYour total Bill is : %d", total_amt);
        printf("\nThank You for Order! Enjoy Your Meal!!");
        exit(0); 
    }
    else
    {
        printf("Please Enter y or n.");
        exit(0); 
    }
}


void main()
{
   
    do
    {
        menu(); 
    } while (more != 'n');
}
