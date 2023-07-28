/*Write a C program for factorial using recursion. */

#include<stdio.h>
long int recu_fact(int num);

long int recu_fact(int num){
    if(num>=1){
        return num * recu_fact(num-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int num ;
    printf("Enter a Number : ");
    scanf("%d" , &num);

    printf("Factorial of %d = %d ", num , recu_fact(num));

    return 0 ;

}
