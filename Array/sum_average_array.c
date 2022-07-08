// Write a C program for Find out total and average of all elements in array
#include <stdio.h>
#include <conio.h>
int main()
{
  int num[20], i, x, sum = 0, avg;
  //	clrscr();
  printf("Enter size of array:");
  scanf("%d", &x);
  printf("Enter elements of array:");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &num[i]);
  }
  for (i = 0; i < x; i++)
  {
    sum += num[i];
  }
  avg = sum / x;
  printf("Sum of array is : %d", sum);
  printf("\nAverage of array is : %d", avg);

  return 0;
}
