#include <stdio.h>
 
int main() 
{
    int type, hours, member;
    double fee = 0;
    printf("Vehicle (1=bike, 2=car, 3=truck): "); 
    scanf("%d", &type);
    printf("Hours parked: "); 
    scanf("%d", &hours);
    printf("Member (1/0): "); 
    scanf("%d", &member);
 
    if (type < 1 || type > 3) 
    {
        printf("Invalid vehicle\n");
    }
    else if (hours <= 0) 
    {
        printf("Invalid duration\n");
    }
    else
    {
        if (type == 1) 
        {
            fee = 20 * hours;
        }
        else if (type == 2)
        {
            if (hours <= 2) 
            {
                fee = 50;
            }
            else 
            {
                fee = 50 + 30 * (hours - 2);
            }
        } 
        else 
        {
            if (hours <= 3) 
            {
                fee = 100;
            }
            else 
            {
                fee = 100 + 50 * (hours - 3);
            }
        }
        if (member == 1 && fee > 200) 
        {
            fee = fee * 0.85;
        }
        printf("Final fee: %.2f\n", fee);
    }
 
    return 0;
}