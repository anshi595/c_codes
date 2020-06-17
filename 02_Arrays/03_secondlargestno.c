//WAP to print second largest no in an array
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int secondlargest(int *arr, int n)
{
    int i, max1, max2;
    max1= max2 = INT_MIN;
    for(i=0; i<n; i++)
    {
        if(arr[i]> max1)
        {
            max2= max1;
            max1= arr[i];
        }
        else if(arr[i]> max2 && arr[i] < max1)
        {
            max2= arr[i];
        }
    } return max2;
}
int main()
{int i, n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the values to filled in array: ");
for(i=0; i<n; i++)
{
   scanf("%d", &arr[i]);

}
printf("Second largest no is: %d", secondlargest(&arr, n));
    return 0;
}
