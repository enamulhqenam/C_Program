/*
Palindrome string check program
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char string1[100];

    int i, length ;

    int flag = 0 ;

    printf("Etern a word : ");
    scanf("%s",string1);

    length = strlen(string1);

    for(i=0 ; i<length ; i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1 ;
            break;
        }
    }
    if(flag){
        printf("%s is not a palindorme",string1);
    }
    else{
        printf("%s  -is a palindorme",string1);
    }

    return 0 ;
}
