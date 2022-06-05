#include <stdio.h>
#define MAX 200

int main()
{
    char text[MAX];
    int i;
    int count= 0;

    printf("\n Enter any string: ");
    gets(text);
    for(i=0; text[i]!='\0'; i++)
    {
        count++;
    }

    printf("\n Length of enter string '%s' = %d", text, count);

    return 0;
}
