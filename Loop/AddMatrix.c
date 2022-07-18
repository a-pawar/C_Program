// WAP to perform multiplication of two matrices.
#include <stdio.h>
#include <conio.h>

int main()
{
  int a[5][5], b[5][5], sum[5][5], r, c;
  printf("Enter No. of rows(1 to 5) : ");
  scanf("%d", &r);
  printf("Enter No. of columns(1 to 5) : ");
  scanf("%d", &c);
  printf("Enter element of first matrices : ");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter element of Second matrices : ");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        sum[i][j] = a[i][j] + b[i][j];
      }
  printf("Addition of matrices are: \n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d  ", sum[i][j]);
    }
    printf("\n");
  }
}
return 0;
}