//Write a program to transpose of matrix.
#include <stdio.h>
#include<conio.h>

int main(){
  int a[10][10],t[10][10],r,c,k,l,temp;
  printf("Enter No. of rows(1 to 10) : ");
  scanf("%d", &r);
  printf("Enter No. of columns(1 to 10) : ");
  scanf("%d", &c);
  printf("Enter element of matrices : ");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
       k=j;
       l=i;
      t[k][l]=a[i][j];
    }
  }
  temp=r;
  r=c;
  c=temp;
  printf("Transpose of given matrix is: \n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d  ",t[i][j]);
    }
    printf("\n");
  }
  
}

