#include <stdio.h>
#include <stdlib.h>


void my_strcp(char *str1, char *str2)
{
   int i;
   for(i=0; str1[i]!='\0'; i++)
   {
      str1[i]=str2[i];

   }
   str1[i]='\0';
fflush(stdin);
}
