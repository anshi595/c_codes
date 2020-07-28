#include <stdio.h>
#include <stdlib.h>
void findsubstr(char* str, char*  substr)
{
   int i, j;
int N= my_strlen(str);  //string length of str
int M=my_strlen(substr); //string length of substr


for(i=0; i<=N-M; i++)
{
    for(j=0; j< M; j++)
    {
        if(str[i+j]!= substr[j])
            break;
    }


}
     if(j==M)
          printf("The position of the string is %d\n", i);
          printf("The address of the that position is %d", &i);



}
