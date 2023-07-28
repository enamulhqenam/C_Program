
#include<stdio.h>

int main()
{
    int  i,j, row , col, first[10][10],second[10][10], sum[10][10] ;

    printf("Enter the number of rows & columns(between 1 and 100) : ");
    scanf("%d %d",&row ,&col);

    printf("Eneter elements of first matrix :\n ");
    for(i=0 ; i<row ; i++){
        for(j=0 ; j<col ; j++){
            scanf("%d",&first[i][j]);
        }
    }

    printf("Enter elements of second matrix : \n");
    for(i=0 ; i<row ; i++){
        for(j=0 ; j<col ; j++){
            scanf("%d",&second[i][j]);
        }
    }


    printf("Sum of Entered Matrix:-\n");
    for(i=0; i<row ; i++){
        for(j=0 ; j<col; j++)
        {
            sum[i][j] = first[i][j] + second[i][j] ;
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}
