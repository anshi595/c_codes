#include <stdio.h>
#include <stdlib.h>
void reversearray(int *arr, int n)
{
    int i, j, temp;
    for(i=0,j=n-1; i<j; i++, j--)
    {

     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
      }
      printf("The reversed array is : ");
      for(i=0; i<n; i++)
   {

    printf(" %d ", arr[i]);

    }
}

int main()
{
int i, n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the values to filled in  the array: ");
for(i=0; i<n; i++)
{
   scanf("%d", &arr[i]);

}
reversearray( &arr, n);
    return 0;
}
