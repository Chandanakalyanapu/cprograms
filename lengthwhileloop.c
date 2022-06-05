#include <stdio.h>
#define MAX 200

int main()
{
    char text[MAX];
        int count= 0;

    printf("\n Enter any string: ");
    gets(text);
    while(text[count]!='\0')
    {
        count++;
    }
    
    printf("\n Length of enter string '%s' = %d", text, count);
    
    return 0;
}
