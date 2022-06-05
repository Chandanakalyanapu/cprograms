#include <stdio.h>
#define MAX 200

int main()
{
    char text[MAX];
    int count= 0;

    printf("\n Enter any string: ");
    gets(text);
    do
    {
         printf("\n Length of  string '%s' = %d", text, count);
         count++;
    }
    
    while(text[count]!='\0');
    return 0;
}
