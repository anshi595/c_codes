//3. Demonstrate function taking input(name) and returning the string
#include <stdio.h>
#include <stdlib.h>
#define Max 20
char name[Max];
char* func()
{
  fgets(name, Max, stdin);
  return name;
}
int main()
{
    printf("%s", func());
    return 0;
}
