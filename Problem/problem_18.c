/*Write C Program to check whether a character is a vowel or not. */


#include<stdio.h>

int main()
{
     char c ;
     int lowerCase_vowel , upperCase_vowel ;

     printf("Enter a alphabet : ");
     scanf("%c",&c);

     lowerCase_vowel = (c=='a' || c=='e'|| c=='i' || c=='o' || c=='u');

     upperCase_vowel = (c=='A' || c=='E'|| c=='I' || c=='O' || c=='U');

     if(lowerCase_vowel || upperCase_vowel){
        printf("%c is vowel . ",c );
     }
     else
        printf("%c in a consonant . ",c);

    return 0 ;

}
