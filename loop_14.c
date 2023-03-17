#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    int i=1;
    int gcd;

    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    while(i<=num1 && i<=num2){
        if(num1%i==0&&num2%i==0){
            gcd=i;

        }
        i++;
    }
    printf("hcf of %d and %d is %d ",num1,num2,gcd);

    return 0;
}
