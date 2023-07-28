/*
Write a C program to print all prime numbers in a given range
using a function.
*/
#include<stdio.h>

int checkPrime(int n);

int checkPrime(int n){
    int j , flag =1 ;

    for(j=2 ; j<n/2 ; ++j ){
        if(n%j == 0 ){
            flag = 0 ;
            break ;
        }
    }
    return flag ;
}

int main(){

    int n1 , n2 , i , flag ;

    printf("Enter two number : ");
    scanf("%d %d", &n1 , &n2);

//swap number .
    if(n1>n2){
        n1 = n1+n2 ;
        n2 = n1-n2 ;
        n1 = n1 -n2 ;
    }

    for(i=n1+1 ; i<n2 ; ++i){
        flag = checkPrime(i);

        if(flag == 1){
            printf("%d ",i);
        }
    }
    return 0 ;
}


