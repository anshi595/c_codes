#include <stdio.h>
#include <stdlib.h>
int my_strlen(char *str)
{
    int count=0;
    for(int i=0; str[i]!='\n'; i++)
    {
        count++;
    }
    return count;
}
