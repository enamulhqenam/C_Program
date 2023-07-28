/*
Given a string // char str [] =”123456789”;
Write a program that displays the following:

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
 5 6 7 8 9 8 7 6 5
*/

#include<stdio.h>

int main (void)
{
int n,i,j;
float e=1.0, nFact=1;

printf("please enter the number");
scanf("%d", &n);

for( i =1; i<= n ; i++)
{
    nFact*=i;
    e = e + (1.0/ nFact);
}

printf("The value of 'e' is : %f", e);

return 0;
}
