//WAP to calculate sum of all elements in an array
#include <stdio.h>
#include <stdlib.h>
int sum_of_elements(int n, int *arr)
{ int i, x=0;
for(i=0; i<n; i++)
{
    x += arr[i];

} return x;

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
   scanf("%d", &arr[i]);

}

printf("sum of all the elements is: %d",  sum_of_elements(n, arr));
    return 0;
}

