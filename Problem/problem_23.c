/*
 Write a program in C to count the total number
of vowels or consonants in a string.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define strSize 1000 //declear the maximu size of string .

void main()
{
    char str[strSize];

    int i , len , vowel , cons ;

    printf("\n\nCount total number of vowel or consonet. \n");
    printf("----------------------------------------------\n");

    printf("Input the strin : ");
    fgets(str, sizeof str , stdin);

    vowel = 0 ;
    cons = 0 ;
    len = strlen(str);

    for(i=0 ; i<len ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
            vowel++ ;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
            vowel++ ;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            cons++ ;
        }
    }
    printf("\nTotal number of vowel in the string is : %d\n",vowel);
    printf("\nTotal number of consonant in the string is : %d\n",cons);

}
