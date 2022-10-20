#include<stdio.h>
int main()
{
    float a,b,A,S,M,D,Avg;
    printf("Enter The Value of A=");
    scanf("%f",&a);
    printf("Enter The Value of b=");
    scanf("%f",&b);
    A=a+b;
    S=a-b;
    M=a*b;
    D=a/b;
    Avg=(a+b)/2;
    printf("a+b is = %f\n",A);
    printf("a-b is = %f\n",S);
    printf("a�b is = %f\n",M);
    printf("a�b is = %f\n",D);
    printf("(a+b)/2 is = %f\n",Avg);
    printf("Code by Shakil");
}
