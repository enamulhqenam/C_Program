/* Write a C progrma to find the Lcm of two numbers . */

#include<stdio.h>

int main(){
    int num1 , num2 , max ;

    printf("Enter two possitive number : ");
    scanf("%d %d",&num1 , &num2);

    //maximum number between num1 and num2 is storde in max .

    max = (num1 > num2) ? num1 : num2 ;

    while(1){
        if((max % num1 == 0) && (max % num2 == 0)){
            printf("The LCM of %d and %d is %d", num1 , num2 , max);
            break;
        }
        max++;
    }
    return 0 ;
}
