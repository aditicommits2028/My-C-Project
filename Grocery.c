#include <stdio.h>
#include <string.h>

void dispalyproducts(char products[][100], int prices[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d %s Rs %d \n", i + 1, products[i], prices[i]);
    }
}

void bill(char names[][100], int prices[], int quantities[], int count)
{
    int i;
    float subtotal = 0, discount, gstamt, finalbill;

    printf("\n========== GROCERY BILL ==========\n");
    printf("%s %s %s\n", "Product", "Quantity", "Amount");

    for (i = 0; i < count; i++)
    {
        printf("%s %d Rs. %d\n",
               names[i], quantities[i],
               prices[i] * quantities[i]);

        subtotal = subtotal + prices[i] * quantities[i];
    }

    if (subtotal >= 1000)
        discount = subtotal * 10 / 100.0;
    else
        discount = 0;

    subtotal = subtotal - discount;
    gstamt = subtotal * 5 / 100.0;
    finalbill = subtotal + gstamt;

    printf("----------------------------------\n");
    printf("Amount after discount: Rs. %.2f\n", subtotal);
    printf("Discount:              Rs. %.2f\n", discount);
    printf("GST (5%%):              Rs. %.2f\n", gstamt);
    printf("Final Bill:            Rs. %.2f\n", finalbill);
    printf("==================================\n");
}

int main()
{
    int category, pro, qty;
    int selectedPrices[50];
    int quantities[50];
    int count = 0;
    int choice = 1;
    char selectednames[50][100];

    char Fruits[10][100] = {"Apples", "Mango", "Papaya", "Kiwi", "Pineapple", "Litchi", "Melon", "Dragonfruit", "Banana", "Peach"};
    int Fruitsprices[10] = {120, 100, 90, 100, 150, 120, 90, 170, 50, 140};

    char Grains[10][100] = {"Rice", "Basmati Rice", "Quinoa", "Oats", "Ragi", "Brown Rice", "Black Rice", "Sorghum", "Millets", "Wheat"};
    int Grainsprices[10] = {250, 300, 225, 150, 230, 450, 550, 260, 320, 190};

    char DairyProducts[10][100] = {"Milk", "Curd", "Cheese", "Yogurt", "Buttermilk", "Cream", "Ghee", "Paneer", "Butter", "Condensed Milk"};
    int DairyProductsprices[10] = {45, 20, 90, 50, 15, 70, 650, 90, 40, 200};

    char Snacks[10][100] = {"Cookies", "Nutella", "Chips", "Biscuits", "Chocolates", "Namkeen", "Candies", "Kurkure", "Nachos", "Cheetos"};
    int Snacksprices[10] = {100, 239, 55, 50, 110, 60, 70, 20, 30, 50};

    char Spices[10][100] = {"Red Chillies", "Turmeric", "Coriander", "Cumin", "Black Pepper", "Cardamom", "Mustard", "Cloves", "Cinnamon", "Garam Masala"};
    int Spicesprices[10] = {30, 50, 20, 70, 90, 80, 150, 120, 130, 150};

    do
    {
        printf("\n WELCOME TO ADITI'S GROCERY STORE\n");
        printf("1. FRUITS \n");
        printf("2. GRAINS \n");
        printf("3. DAIRY PRODUCTS \n");
        printf("4. SNACKS \n");
        printf("5. SPICES \n");
        printf("Enter the category \n");
        scanf("%d", &category);
        switch (category)
        {
        case 1:
            printf("Fruits\n");
            dispalyproducts(Fruits, Fruitsprices, 10);
            printf("Enter the Product \n");
            scanf("%d", &pro);
            if (pro >= 1 && pro <= 10)
            {
                printf("Enter the quantity \n");
                scanf("%d", &qty);
                if (qty > 0)
                {
                    if (count < 50)
                    {
                        strcpy(selectednames[count], Fruits[pro - 1]);
                        selectedPrices[count] = Fruitsprices[pro - 1];
                        quantities[count] = qty;
                        count++;

                        printf("Product added to your order!\n");
                    }
                    else
                    {
                        printf("Order limit reached!\n");
                    }
                }
                else
                {
                    printf("Invalid Quantity\n");
                }
            }
            else
            {

                printf("Invalid Product \n");
            }

            break;

        case 2:
            printf("Grains\n");
            dispalyproducts(Grains, Grainsprices, 10);
            printf("Enter the product\n");
            scanf("%d", &pro);
            if (pro >= 1 && pro <= 10)
            {
                printf("Enter the quantity\n");
                scanf("%d", &qty);
                if (qty > 0)
                {
                    if (count < 50)
                    {
                        strcpy(selectednames[count], Grains[pro - 1]);
                        selectedPrices[count] = Grainsprices[pro - 1];
                        quantities[count] = qty;
                        count++;

                        printf("Product added to your order!\n");
                    }
                    else
                    {
                        printf("Order limit reached!\n");
                    }
                }
                else
                {
                    printf("Invalid Quantity\n");
                }
            }
            else
            {
                printf("Invalid Product\n");
            }

            break;

        case 3:
            printf("Dairyproducts\n");
            dispalyproducts(DairyProducts, DairyProductsprices, 10);
            printf("Enter the product \n");
            scanf("%d", &pro);
            if (pro >= 1 && pro <= 10)
            {
                printf("Enter the quantity \n");
                scanf("%d", &qty);
                if (qty > 0)
                {
                    if (count < 50)
                    {
                        strcpy(selectednames[count], DairyProducts[pro - 1]);
                        selectedPrices[count] = DairyProductsprices[pro - 1];
                        quantities[count] = qty;
                        count++;

                        printf("Product added to your order!\n");
                    }
                    else
                    {
                        printf("Order limit reached!\n");
                    }
                }
                else
                {
                    printf("Invalid Quantity\n");
                }
            }
            else
            {
                printf("Invalid Product \n");
            }

            break;

        case 4:
            printf("Snacks\n");
            dispalyproducts(Snacks, Snacksprices, 10);
            printf("Enter the product \n");
            scanf("%d", &pro);
            if (pro >= 1 && pro <= 10)
            {
                printf("Enter the quantity \n");
                scanf("%d", &qty);
                if (qty > 0)
                {
                    if (count < 50)
                    {
                        strcpy(selectednames[count], Snacks[pro - 1]);
                        selectedPrices[count] = Snacksprices[pro - 1];
                        quantities[count] = qty;
                        count++;

                        printf("Product added to your order!\n");
                    }
                    else
                    {
                        printf("Order limit reached!\n");
                    }
                }
                else
                {
                    printf("Invalid Quantity\n");
                }
            }
            else
            {
                printf("Invalid Product \n");
            }
            break;

        case 5:
            printf("Spices\n");
            dispalyproducts(Spices, Spicesprices, 10);
            printf("Enter the product \n");
            scanf("%d", &pro);
            if (pro >= 1 && pro <= 10)
            {
                printf("Enter the quantity \n");
                scanf("%d", &qty);
                if (qty > 0)
                {
                    if (count < 50)
                    {
                        strcpy(selectednames[count], Spices[pro - 1]);
                        selectedPrices[count] = Spicesprices[pro - 1];
                        quantities[count] = qty;
                        count++;

                        printf("Product added to your order!\n");
                    }
                    else
                    {
                        printf("Order limit reached!\n");
                    }
                }
                else
                {
                    printf("Invalid Quantity\n");
                }
            }
            else
            {
                printf("Invalid Product \n");
            }
            break;

        default:

            printf("Invalid \n");
        }
        printf("Add more products? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    if (count > 0)
    {
        bill(selectednames, selectedPrices, quantities, count);
    }
    else
    {
        printf("No products added to the bill \n");
    }

    return 0;
}