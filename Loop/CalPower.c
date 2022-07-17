//WAP to calculate power of given number.
#include<stdio.h>
#include<conio.h>

int main(){
  int baseNum,powNum;
  printf("Enter Base number: ");
  scanf("%d",&baseNum);
  printf("Enter power : ");
  scanf("%d",&powNum);
  int result=1;
  for (int i = 0; i < powNum; i++)
  {
    result = baseNum * result;
  }
  printf("%d",result);

  
}


