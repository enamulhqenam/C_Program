#include<stdio.h>
#include<math.h>

int main()
{
    float area , a , b , c , x , s ;
    
    printf("Enter Tringle three side valu : ");
    scanf("%f %f %f",&a ,&b ,&c);
    
    s = ((a+b+c)/2);
    x = s*(s-a)*(s-b)*(s-c);
    area = pow(x,0.5);
    printf("\nTringle area of : %.2f",area);
    
    return 0;
}
