
//The following program checks whether the entered number is positive or negative
#include<stdio.h>
main()
{
    float a;
    printf("Enter Number to check positive or negative=");
    scanf("%f",&a);
    if(a>0)
    {
    printf("The Number %f  is Positive",a);
    }
    else
    {
    printf("This Number %f  is Negative",a);
    }
}