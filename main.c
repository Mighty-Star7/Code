#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main() 
{
    float a, area;

    printf("Insert any number: ");
    scanf( "%f", &a);
    
    area = pi * pow(a, 2);


    printf("The number you choose is: %.2f\n", a);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}