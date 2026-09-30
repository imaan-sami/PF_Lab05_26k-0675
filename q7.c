#include <stdio.h>
 
int main() 
{
    int stream, interest, medicine;
    printf("Stream (1=Science, 2=Commerce, 3=Arts): ");
    scanf("%d", &stream);
 
    if (stream == 1)
    {
        printf("Interest (1=Biology, 2=Physics, 3=Chemistry): ");
        scanf("%d", &interest);
        if (interest == 1)
        {
            printf("Interested in medicine (1/0): ");
            scanf("%d", &medicine);
            if (medicine == 1)
            {
                printf("Recommended: MBBS\n");
            }
            else
            {
                printf("Recommended: Biotechnology\n");
            }
        }
        else if (interest == 2)
        {
            printf("Recommended: BS Physics\n");
        }
        else if (interest == 3)
        {
            printf("Recommended: BS Chemistry\n");
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else if (stream == 2)
    {
        printf("Interest (1=Accounting, 2=Marketing): ");
        scanf("%d", &interest);
        if (interest == 1)
        {
            printf("Recommended: BBA Accounting / ACCA\n");
        }
        else if (interest == 2)
        {
            printf("Recommended: BBA Marketing\n");
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else if (stream == 3)
    {
        printf("Interest (1=Literature, 2=History, 3=Psychology): ");
        scanf("%d", &interest);
        if (interest == 1)
        {
            printf("Recommended: BA English Literature\n");
        }
        else if (interest == 2)
        {
            printf("Recommended: BA History\n");
        }
        else if (interest == 3)
        {
            printf("Recommended: BS Psychology\n");
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else
    {
        printf("Invalid choice\n");
    }
 
    return 0;
}