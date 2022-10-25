#include<stdio.h>
main()
{
 int a;
 printf("Enter The Number of Day=");
 scanf("%d",&a);
 switch(a)
 {
 case 1:
 printf("Saturday");
 break;
  case 2:
 printf("Sunday");
 break;
  case 3:
 printf("Monday");
 break;
  case 4:
 printf("Tuesday");
 break;
  case 5:
 printf("Wednesday");
 break;
  case 6:
 printf("Thursday");
 break;
  case 7:
 printf("Friday");
 break;
 default:
 printf("There're Seven Days in a week so Invalid Choice");
 }
}