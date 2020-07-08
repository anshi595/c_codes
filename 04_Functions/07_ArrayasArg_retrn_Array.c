//7. function returning array of int taking array of int as argument.
#include <stdio.h>
#include <stdlib.h>
int* func(int *arr)
{  arr[0]= 10;
  arr[1]=arr[0]*2;
  return arr;

}
int main()
{ int i, arr[6]= {1, 2, 3, 4, 5, 6};
 int *p= func(arr);
printf(" %d %d", p[0], p[1]);
for(i=0; i<6; i++)
{
    printf("\n %d  ", arr[i]);
}
    return 0;
}
