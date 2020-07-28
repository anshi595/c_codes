#include <stdio.h>
#include <stdlib.h>

char * replace(char * str, char old, char new)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==old)
            str[i]=new;
    }
    return str;

}
