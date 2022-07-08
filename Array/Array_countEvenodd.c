// Write a C program for Count and print total number of odd and even numbers in the list.
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
      even++;
    }
    else
    {
      odd++;
    }
  }
  printf("Total Even Numbers: %d", even);
  printf("\nTotal odd Numbers: %d", odd);
  return 0;
}