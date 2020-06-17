#include <stdio.h>
#include <stdlib.h>
int largestno(int *arr, int n)
{int i;
for(i=0; i<n; i++)
{  if(arr[0]<arr[i])
     arr[0]=arr[i];
}
 return arr[0];
}
int main()
{
int i, n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the values to filled in array: ");
for(i=0; i<n; i++)
{
   scanf("%d", arr[i]);

}
printf("Largest no is : %d", largestno(&arr, n));

    return 0;
}
