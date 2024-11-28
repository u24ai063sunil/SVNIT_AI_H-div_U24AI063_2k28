/*
109. MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO 
MODIFY)
*/

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Before modification: num = %d\n", num);

    *ptr = 20;

    printf("After modification: num = %d\n", num);

    return 0;
}
