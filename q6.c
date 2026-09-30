#include <stdio.h>
 
int main() 
{
    int category, subType, delayed;
    printf("Category (1=Greeting, 2=Query, 3=Complaint, 4=Feedback): ");
    scanf("%d", &category);
 
    if (category < 1 || category > 4)
    {
        printf("Invalid selection\n");
    }
    else if (category == 1)
    {
        printf("Sub-type (1=Morning, 2=Evening): ");
        scanf("%d", &subType);
        if (subType == 1)
        {
            printf("Good morning! How can I help you today?\n");
        }
        else if (subType == 2)
        {
            printf("Good evening! How can I help you?\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else if (category == 2)
    {
        printf("Sub-type (1=Product, 2=Billing, 3=Technical): ");
        scanf("%d", &subType);
        if (subType == 1)
        {
            printf("Here is the product information you asked for.\n");
        }
        else if (subType == 2)
        {
            printf("Let me connect you to our billing team.\n");
        }
        else if (subType == 3)
        {
            printf("Our technical support will assist you shortly.\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else if (category == 3)
    {
        printf("Sub-type (1=Delivery, 2=Quality): ");
        scanf("%d", &subType);
        if (subType == 1)
        {
            printf("Is the order delayed (1/0): ");
            scanf("%d", &delayed);
            if (delayed == 1)
            {
                printf("We sincerely apologize for the delay. We are expediting your order.\n");
            }
            else
            {
                printf("We apologize for the inconvenience. Please share your order details.\n");
            }
        }
        else if (subType == 2)
        {
            printf("Sorry about the quality issue. We will arrange a replacement.\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else
    {
        printf("Sub-type (1=Positive, 2=Negative): ");
        scanf("%d", &subType);
        if (subType == 1)
        {
            printf("Thank you for your kind feedback!\n");
        }
        else if (subType == 2)
        {
            printf("Sorry to hear that. We will work to improve.\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
 
    return 0;
}
