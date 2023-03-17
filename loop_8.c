#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int f=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1 ;i<=n;i++){
        f=f*i;

    }
    printf("%d",f);

    return 0;
}
