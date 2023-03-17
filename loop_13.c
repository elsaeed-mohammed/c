#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,lcm;
    int fact=1;
    printf("enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    lcm=(num1<num2)?num2:num1;
    while(fact){
        if(lcm%num1==0 && lcm%num2==0){
            printf("lcm of %d and %d is %d ",num1,num2,lcm);
            fact=0;
        }
        lcm++;
    }


    return 0;
}
