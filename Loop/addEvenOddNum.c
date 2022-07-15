//WAP a program to add and print result of all odd and even numbers from 1 to n individually.
#include<stdio.h>
#include<conio.h>

int main(){
  int addEven=0,addOdd=0,n;
  printf("Enter value of n: ");
  scanf("%d",&n);

  for(int i=0,j=1;i<=n,j<=n;i=i+2,j=j+2){
    addEven=addEven+i;
    addOdd=addOdd+j;
  }
  printf("Sum of all even num: %d",addEven);
  printf("\nSum of all odd num: %d",addOdd);
  return 0;
}