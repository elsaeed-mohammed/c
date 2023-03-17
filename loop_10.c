#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,first_digit,last_digit;
    printf("enter the number:");
    scanf("%d",&num);
    last_digit=num%10;
    printf("last digit is %d\n",last_digit);
    first_digit=num;

    while(first_digit>10){

        first_digit=first_digit/10;


    }
     printf("first digit is %d",first_digit);
    return 0;
}
