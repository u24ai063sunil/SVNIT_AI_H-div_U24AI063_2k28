//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X OR Y.

#include<stdio.h>

void Exchange(int a,int b)

{

    int temp=a;

    a=b;

    b=temp;

    printf("The exchanged values are:\n x=%d \t y=%d ",a,b);

}

int main()

{

    int x,y;

    printf("Enter the value of x:\t");

    scanf("%d",&x);

    printf("Enter the value of y:\t");

    scanf("%d",&y);

    Exchange(x,y);

    return 0;

}
