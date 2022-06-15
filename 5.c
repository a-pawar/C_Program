#include<stdio.h>
 int main()
 { int num1 = 10;
   
   float num2 = 9.23;
   
   printf("num1 = %d\n",num1);
   printf("num1 = %5d\n",num1);
   printf("num1 = %10d\n",num1);
   printf("num1 = %-5d\n",num1);
   printf("num1 = %+5d\n",num1);
   printf("num1 = %-+6d\n",num1);

   printf("num2 = %f\n",num2);
   printf("num2 = %6f\n",num2);
   printf("num2 = %12f\n",num2);
   printf("num2 = %-5f\n",num2);
   printf("num2 = %+5f\n",num2);
   return 0;
 }