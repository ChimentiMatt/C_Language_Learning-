#include <stdio.h>
#include "inventory.h"

// Creating custom data type bool.
typedef enum {
    false,
    true
}
bool_enum;



int main()
{
    inventory();
    // bool_enum inLoop = true;
    int choice = 0;

    while (choice != 9)
    {
        printf("Make your selection: ");
        scanf("%d", &choice);
        printf("\nYou entered: %d", choice);

        if (choice == 1)
        {
            printf("\nyou selected 1: ");
        }
    }

    return 0;
}
