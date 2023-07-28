/* Write a C program to find a digit (first, last, min, max)
 from an array. */

 #include<stdio.h>

 int main(){

    int n ,i,  min,max , arrays[100];

    printf("Enter Number of array :  ");
    scanf("%d",&n);

    printf("Enter elements in array :\n");
     for(i=0 ; i<n ; i++ ){
        scanf("%d" , &arrays[i]);
    }

//fint minimum array

    min = max = arrays[0];
    for(i=1 ; i<n ; i++){
        if(min>arrays[i]){
            min = arrays[i] ;
        }
        else{
            if(max<arrays[i]);
            max= arrays[i];
        }
    }

    printf("Minumum of array is %d",min);
    printf("\tMaximum of array is %d",max);

    return 0;
 }

 /*
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 10;
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("first digit = %d and last digit = %d\n\n", firstDigit,lastDigit);
 8?
