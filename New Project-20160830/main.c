#include <stdio.h>
#include "worldTraveler.h"

int main()
{
    int choice = 0;
    
    PrintGreeting();
    
    while(1){
    
        DisplayMainMenu();
        
        printf("Your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                ConvertTime();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}

