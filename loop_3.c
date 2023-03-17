#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            sum=sum+i;

    }
    printf("sum of numbers from 1 to %d is %d ",n,sum);

    return 0;
}
