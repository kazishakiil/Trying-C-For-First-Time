#include <stdio.h>  
main()  
{  
    float a, b, c;   
     printf("Enter first number"); 
     scanf("%f",&a); 
      printf("Enter Second number"); 
      scanf("%f",&b); 
       printf("Enter third number");
       scanf("%f",&c);  
    if(a>b && a>c)  
    {
        printf(" %f is largest",a);  
    }
    if(b>a  && b > c)  
     {
        printf(" %f is largest",b);  
     }
    if(c>a && c>b)  
     {
        printf(" %f is largest",c);  
     }
    if(a == b && a == c)   
     {
        printf(" All are equal");   
    }  
}