/*
104. AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY 
THE HEXADECIMAL COLOR CODE.
*/

#include <stdio.h>

enum Color {RED, GREEN, BLUE, YELLOW, BLACK, WHITE};

int main() {
    enum Color color;
    
    printf("Enter a color (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW, 4 for BLACK, 5 for WHITE): ");
    scanf("%d", &color);
    
    switch(color) {
        case RED:
            printf("The hexadecimal color code for RED is: #FF0000\n");
            break;
        case GREEN:
            printf("The hexadecimal color code for GREEN is: #00FF00\n");
            break;
        case BLUE:
            printf("The hexadecimal color code for BLUE is: #0000FF\n");
            break;
        case YELLOW:
            printf("The hexadecimal color code for YELLOW is: #FFFF00\n");
            break;
        case BLACK:
            printf("The hexadecimal color code for BLACK is: #000000\n");
            break;
        case WHITE:
            printf("The hexadecimal color code for WHITE is: #FFFFFF\n");
            break;
        default:
            printf("Invalid color choice.\n");
    }
    
    return 0;
}
