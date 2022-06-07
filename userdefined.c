#include <stdio.h>
void sum()
{
   int a,b,sum;
   printf("enter two numbers:");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("sum=%d",sum);
}
void main()
{
    sum();
    printf("\nhello\n");
    sum();
}
