#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pow;
    int base;
    int result=1;
    printf("enter the number : ");
    scanf("%d",&base);
    printf("enter the power : ");
    scanf("%d",&pow);
    for(int i=1 ;i<=pow;i++){
        result=result*base;
    }
    printf("%d",result);
    return 0;
}
