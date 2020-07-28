#include <stdio.h>
#include <stdlib.h>


char * rightrotate(char *str, int num)
{ int j, temp, n;
 n= my_strlen(str);

    while(num>0)
    {
        temp= str[n-1];
        for(j=n-1; j>0; j--)
        {
            str[j]=str[j-1];
        }
        str[j]= temp;
        num--;
    }

    return str;
}
