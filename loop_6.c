#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=12;i++){
            int pro=n*i;
        printf("%d*%d =%d\n",n,i,pro);
    }
    return 0;
}
