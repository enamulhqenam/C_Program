/* write a c prgoram to print the Fibonacci series*/

#include<stdio.h>

int main()
{
    int first = 0 , second = 1 ,count=0, num , fibo ;

    printf("Enter renger of Fibonacci series : ");
    scanf("%d",&num);

    while(count<num){
        if(count<=1){
            fibo = count ;
        }
        else{
            fibo = first + second ;
            first = second ;
            second = fibo;
        }
        printf("%d ",fibo);
        count++ ;
    }
    return 0;
}
