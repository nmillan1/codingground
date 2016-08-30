#include <stdio.h>
#include "worldTraveler.h"

void PrintGreeting (void){
    printf("Greetings!\n");
}

void DisplayMainMenu(void){
    printf("==============================\n");
    printf("         MAIN MENU\n");
    printf("        ------------\n");
    printf("\t1 - Convert Time\n");
    printf("\t2 - Convert Currency\n");
    printf("\t3 - Convert Temperature\n");
    printf("\t4 - Quit\n");
    printf("==============================\n");
}

void DisplayLocationsMenu (void){
    printf("==============================\n");
    printf("         WHERE ARE YOU?\n");
    printf("        ------------\n");
    printf("\t1 - London\n");
    printf("\t2 - Stockholm\n");
    printf("\t3 - Tampere\n");
    printf("\t4 - Helsinki\n");
    printf("\t5 - St. Petersburg\n");
    printf("==============================\n");   
}

void ConvertTime (void){
    int location, hour, minute, convertedHour, convertedMinute;
    
    DisplayLocationsMenu();
    printf("Enter location");
    scanf("%d", &location);
    
    printf("What time is it?\n");   
    
    printf("hour?\n");
    printf("Please enter an integer between 0 and 23 :");
    scanf("%d", &hour);
    
    printf("minute?\n");
    printf("Please enter an integer between 0 and 59 ");
    scanf("%d", &minute);
    
    switch(location){
        case 1:
            printf("%d:%d London Time is %d:%d Eastern Time\n", hour, minute, (hour+5) % 12, minute);
            break;
        case 2:
            printf("%d:%d Stockholm Time is %d:%d Eastern Time\n", hour, minute, (hour+6) % 12, minute);
            break;
        case 3:
            printf("%d:%d Tampere Time is %d:%d Eastern Time\n", hour, minute, (hour+7) % 12, minute);
            break;
        case 4:
            printf("%d:%d Helsinki Time is %d:%d Eastern Time\n", hour, minute, (hour+8) % 12, minute);
            break;
        case 5:
            printf("%d:%d St. Petersburg Time is %d:%d Eastern Time\n", hour, minute, (hour+9) % 12, minute);
            break;
        default:
            break;
    }
}