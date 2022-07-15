// WAP to multiply and print result of all odd and even numbers from 1 to n individually.
#include <stdio.h>
#include <conio.h>

int main()
{
  int mulEven = 1, mulOdd = 1, n;
  printf("Enter value of n: ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i = i + 2)
  {
    mulEven = mulEven * i;
  }
  for (int j = 1; j <= n; j = j + 2)
  {
    mulOdd = mulOdd * j;
  }

  printf("Mul of all even num: %d", mulEven);
  printf("\nMul of all odd num: %d", mulOdd);
  return 0;
}