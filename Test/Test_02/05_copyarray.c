//WAP to copy array A to B
#include <stdio.h>
#include <stdlib.h>
void copyarray(int n, int *arr1, int *arr2)
{ int i, j;
for(i=0; i<n; i++)
{
    arr2[i]=arr1[i];
}
 printf("Original   --   copied\n");
 for(j=0; j<n; j++)
 {
     printf("  %d   %d\n", arr1[j], arr2[j]);
 }




}
int main()
{ int i, n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr1[n];
printf("Enter the values to filled in array: ");
for(i=0; i<n; i++)
{
   scanf("%d", &arr1[i]);

}
int arr2[n];
copyarray(n, arr1, arr2);

    return 0;
}
