/*
Multiplication of two numbers using plus (+) operator
*/


#include<stdio.h>

int main()
{
    int a , b , mul , loop ;

    printf("ENter first and second number : ");
    scanf("%d %d", &a , &b);

    mul = 0 ;
    for(loop = 1 ; loop <= b ; loop++){
        mul +=a ;
    }
    printf("Multiplication of %d and %d is : %d\n", a , b , mul);

    return 0 ;
}
