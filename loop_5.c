#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int sum=0;
   printf("enter the number :");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2!=0){
            sum+=i;

    }
   }
   printf("sum is %d",sum);
    return 0;
}
