#include <stdio.h>
#include <stdlib.h>

void createsubset( int n, int *arr)
{ int i, j, k;
  for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
    {
        if(arr[i]==arr[j])
        {
            for(k=j; k<n; k++)

                arr[k]=arr[k+1];

            n--;
            j--;

        }
    }
  }



  printf("The subset of the array is: ");
  for(i=0; i<n; i++)
  {
      printf(" %d", arr[i]);
  }


 }

int main()
{
int i, n;
printf("Enter size of array : ");
scanf("%d", &n);
int arr[n];


printf("Enter the values to filled in array :");
for(i=0; i<n; i++)
{
    scanf("%d", &arr[i]);
}

createsubset(n, arr);




    return 0;
}


