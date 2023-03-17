#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num,first_digit,last_digit,sum;
  printf("enter the number:");
  scanf("%d",&num);
  last_digit=num%10;
  first_digit=num;
  while(first_digit>10){
    first_digit=first_digit/10;

  }
  sum=first_digit+last_digit;
  printf("sum is %d",sum);
    return 0;
}
