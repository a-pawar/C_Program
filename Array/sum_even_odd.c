// Write a C program for Print sum of all odd and even numbers individually.
#include <stdio.h>
#include <conio.h>
int main()
{
  int num[20], i, x;

  int even = 0, odd = 0;
  printf("Enter size of array: ");
  scanf("%d", &x);
  printf("Enter element in array: ");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < x; i++)
  {
    if (num[i] % 2 == 0)
    {
      even+=num[i];
    }
    else
    {
      odd+=num[i];
    }
  }
  printf("Sum of Even Numbers: %d", even);
  printf("\nSum of odd Numbers: %d", odd);
  return 0;
}