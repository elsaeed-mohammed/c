#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i=0;
    printf("enter the number :");
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        i++;
    }
    printf("%d",i);

    return 0;
}
