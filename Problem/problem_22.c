/*
https://www.w3resource.com/w3r_images/c-basic-declarations-
and-expressions-image-exercise-55.png
**************************************************************
Swaps two numbers without using third variable
*/

#include<stdio.h>

int main()
{
    int x , y ;

    printf("Input valu of x & y : ");
    scanf("%d %d",&x , &y);

    printf("\nBefore swapping the value of x & y : %d %d", x, y);

    x = x + y ;
    y = x - y ;
    x = x - y ;

    printf("\nAfter swapping the valu of x & y : %d %d " ,x , y);

    return 0 ;
}

