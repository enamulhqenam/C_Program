
/*Write a C program to find the GCD of two number using recursion.*/

#include<stdio.h>

int recf(int num1 , int num2 );

int rcf(int num1 , int num2 ){
    if(num2 != 0 ){
        return rcf(num2 , num1 % num2);
    }
    else{
        return num1;
    }

}

int main(){
    int num1 , num2 ;

    printf("Enter two number : ");
    scanf("%d %d",&num1 , &num2);

    printf("G.C.D of %d and %d is %d",num1 , num2 , rcf(num1,num2));

    return 0;
}
