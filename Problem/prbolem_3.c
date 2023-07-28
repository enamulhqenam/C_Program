
/* C program to count all occurrences of a character in a given string
 */

#include<stdio.h>
#include<string.h>

int main(){

    char word[100] , chr ;

    int i , count = 0;

    printf("Enter any word : ");
    gets(word);

    printf("Enter the chracter that you want to search for : ");
    scanf("%c",&chr);

    for(i =0 ; i<strlen(word) ; i++){
        if(word[i] == chr){
         count++;
        }
    }
    printf("\n The total number of time '%c' has occured = %d ",chr , count);

    return 0;
}
