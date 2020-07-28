#include <stdio.h>
#include <stdlib.h>

char * squeeze(char *str, char c)
{  int i, count=0;

  for(i=0; str[i]!='\n'; i++)
  {
      if(str[i]==c)
      {  count++;
      }

      if(count>1)
      {
          str[i]=str[i+1];
      }
  }
 return str;


fflush(stdin);
}

