//1. print the size of all types of pointer.
#include <stdio.h>
#include <stdlib.h>

int main()
{ int p;
  char x;
  float y;
  double z;


  int *p1=&p;
  char *x1=&x;
  float *y1=&y;
  double *z1= &z;

  printf("Size of Integer pointer is %d\n", sizeof(p1));
  printf("Size of Character pointer is %d\n", sizeof(x1));
  printf("Size of float pointer is %d\n", sizeof(y1));
  printf("Size of double pointer is %d\n", sizeof(p1));


    return 0;
}
