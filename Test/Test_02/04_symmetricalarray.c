//WAP to determine if array is symmentrical
#include <stdio.h>
#include <stdlib.h>
void issymmetrical(int n, int * arr)
{ int i, j;
for(i=0; i<n; i++)
{ for(j=n-1; j>i; j--)
{
    if(arr[i]==arr[j])

        return printf("Array is symmetric");
    else
        return printf("Array is  not symmetric");

}
}

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

issymmetrical( n, arr);
    return 0;
}
