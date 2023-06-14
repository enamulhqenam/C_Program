#include<stdio.h>

int main()
{
    float area , base , height ;
    
    printf("Enter Tringle Base : ");
    scanf("%f",&base);
    printf("\nEnter Tringle Height: ");
    scanf("%f",&height);
    
    area = (base*height)/2;
    printf("\nTringle area of : %.2f",area);
    
    return 0;
}
