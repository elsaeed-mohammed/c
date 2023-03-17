#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int reverse=0;
    int remainder;
    printf("enter the number:");
    scanf("%d",&num);
    while(num){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    printf("the reverse is %d",reverse);


    return 0;
}
