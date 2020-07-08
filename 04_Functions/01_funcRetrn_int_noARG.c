//1. Demonstrate function returning int taking no arguments
#include <stdio.h>
#include <stdlib.h>
int func()
{ int a=10, b=20;
  int total=0;
  total=a+b;

    return total;
}
int main()
{   int sum;
    sum= func();
    printf("\n%d", sum);
    return 0;
}
