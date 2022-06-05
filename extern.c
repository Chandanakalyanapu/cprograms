#include<stdio.h>
void main()
{
extern int x=10;//external variable (also global)
x=x+1;
printf(x);
}  
