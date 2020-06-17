#include <stdio.h>
#include <stdlib.h>
//WAP to calculate the frequency of each element in an array
void frequencyofelement(int *arr, int n)
{ int i, j, b[50], count=0;
for(i=0; i<n; i++)
{ count=1;
    if(arr[i]!=-1)
       {
           for(j=i+1; j<n; j++)

       {
           if(arr[i]==arr[j])
           {
               count+=1;
               arr[j]=-1;}
        }
       }

        b[i]=count;
}
for(i=0; i<n; i++)
    {
       if(arr[i]!=-1)
        {
        printf("Frequency of %d is %d\n", arr[i], b[i]);
         }
       }
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
frequencyofelement( arr, n);
    return 0;
}

