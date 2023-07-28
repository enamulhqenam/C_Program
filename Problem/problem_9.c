/* Write a C program to print a full pyramid using a star*/

/*
#include<stdio.h>

int main(){
    int i , j , rows , star = 0 ;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    for(i=0 ; i<rows ; i++){
        for(j=0; j<=(rows -i -1); j++){
            printf(" ");
        }

        //printing stars

        while(star !=(2*i+1)){
            printf("*");
            star++;
        }
        star = 0 ;
        //move to new row
        printf("\n");
    }
    return 0 ;
}
*/

#include<stdio.h>

int main(){
    char *str="*****************"; //star = 17 "*****************" .
    int i,j, rows;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for(i=0;i<rows;i++){
       printf("%*.*s\n",rows+i, 2*i+1, str);
    }
    return 0;
}

