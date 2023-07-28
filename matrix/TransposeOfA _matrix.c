#include<stdio.h>

int main()
{

    int i, j, row, col, matrix[10][10], transpos[10][10] ;

    printf("Enter rows and columns of matrix : ");
    scanf("%d %d", &row , &col);

    printf("Enter elements of the matrix : \n");
    for(i=0 ; i<row ; i++){
        for(j=0 ;j<col ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0 ; i<row ; i++){
        for(j=0; j<col ; j++){
            transpos[j][i] = matrix[i][j];
        }
    printf("Transpose of the matrix\n ");
    }

    for(i=0 ; i<row ; i++){
        for(j=0; j<col ; j++){
            printf("%d\t",transpos[i][j]);
        }
        printf("\n");
    }
    return 0;
}
