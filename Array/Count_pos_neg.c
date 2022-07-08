// Write a C program for Count and print total number of positive, negative numbers and zeros.

#include <stdio.h>
#include <conio.h>
int main()
{
  int num[20], i, x;

  int zero = 0, pos = 0,neg=0;
  printf("Enter size of array: ");
  scanf("%d", &x);
  printf("Enter element in array: ");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < x; i++)
  {
    if (num[i] == 0)
    {
      zero++;
    }
    else if(num[i]>0)
    {
      pos++;
    }
    else{
      neg++;
    }
  }
  printf("Total zero : %d", zero);
  printf("\nTotal positive Numbers: % d", pos);
  printf("\nTotal negitive Numbers: % d", neg);
  return 0;
}