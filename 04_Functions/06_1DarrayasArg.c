//6.  various ways of taking an array as argument.
#include <stdio.h>
#include <stdlib.h>
void print(int n, int *arr) //Method1
{ int i;
for(i=0; i<n; i++)
{
    printf(" %d", arr[i]);
}
}
 int sumofelem(int arr[5]) //Method 2
 {
     int i, sum=0;
     for(i=0; i<5; i++)
     {
        sum= sum + arr[i];

     }
     return sum;
 }

int main()
{ int arr[5]={2, 3, 4, 5, 6};
   print( 5, &arr);
   printf("\n %d",  sumofelem(arr));
    return 0;
}
