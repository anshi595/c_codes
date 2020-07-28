#include <stdio.h>
#include <stdlib.h>

void printallstrings()
{  char str[5][50];
 int i;
 printf("\nEnter the strings:");
 for(i=0; i<5; i++)
 {
     scanf("%s[^\n]", str[i]);
 }
printf("\nEntered strings are: \n");
 for(i=0; i<5; i++)
 {
     printf("\n%s", str[i]);
 }
fflush(stdin);
}
