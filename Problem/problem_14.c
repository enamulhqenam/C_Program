/*

*/

#include<stdio.h>

int main (void)
{
int n,i,j;
float e=1.0, nFact=1;

printf("please enter the number: ");
scanf("%d", &n);

for( i =1; i<= n ; i++)
{
    nFact*=i;
    e = e + (1.0/ nFact);
}

printf("The value of 'e' is : %f", e);

return 0;
}

