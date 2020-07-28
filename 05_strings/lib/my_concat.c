#include <stdio.h>
#include <stdlib.h>


char* my_concat(char *str1, char *str2)
{  int i, length=0;
char* str3= malloc(50*sizeof(char));
    for(i=0; str1[i]!='\n'; i++)
    {
        str3[length]=str1[i];
        length++;
    }

    for(i=0; str2[i]!='\n'; i++)
    {
        str3[length+i]= str2[i];
    }
    str3[length+i]='\0';

    return str3;
    free(str3);
}
