
/* bubble sort in ascendin and descending orde */

#include<stdio.h>

int main()
{
    int array[100] , num , c , d , swap ;

    printf("Enter number of elements : ");
    scanf("%d",&num);

    printf("Enter %d integers\n",num);

    for(c=0 ; c<num ; c++){
        scanf("%d",&array[c]);
    }

    for(c=0; c<(num-1) ;c++){
        for(d=0;d<num-c-1 ; d++){
            if(array[d] > array[d+1]){
                swap = array[d];
                array[d] = array[d+1];
                array[d+1] = swap ;
            }
        }
    }

    printf("Shorted list in ascending order :\n");

    for(c=0 ; c<num; c++){
        printf("%d\n",array[c]);
    }

    printf("\nSorterd list in descending order:\n");

    for(c=num-1 ; c>=0 ; c--){
        printf("%d\n",array[c]);
    }
    return 0;

}
