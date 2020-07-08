//4.  Various ways of taking 2d array as argument.
#include <stdio.h>
#include <stdlib.h>
void print(int arr[2][2]) //Method 1
{
  int i, j;
 for(i=0; i<2; i++)
    {
     for (j=0; j<2; j++)
     {
       printf(" %d", arr[i][j]);
      }
    }
}
void print2(int *arr, int m, int n)  //Method 2
{ int i, j;
 for(i=0; i<m; i++)
    {
     for (j=0; j<n; j++)
     {
       printf(" \n%d", *((arr+ i *n) +j));
      }
    }

}

int main()
{ int arr[2][2]= {{ 4, 5}, {6, 8}};
int m=2, n=2;
 print(arr);
 print2(&arr, m, n);

return 0;
}
