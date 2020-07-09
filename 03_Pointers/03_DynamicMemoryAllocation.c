#include <stdio.h>
#include <stdlib.h>
int main()
{ int n, i;
printf("Enter the size of an array: ");
scanf("%d", &n);
int *A1= (int *)malloc(n*sizeof(int));// or using calloc (int*)calloc(n, sizeof(int))
  if(A1==NULL)
    {
        printf("Memory not allocated");
        exit(0);
           }
   else
      { printf("Memory is Allocated\n");
        for(i=0; i<n; i++)
        {
          scanf("\n%d", &A1[i]);
         }
         for(i=0; i<n; i++)
          {
            printf("  %d", *(A1+i));
               }
}
n=n+2;// New Size of Array
printf("\nThe size of new Array is %d", n);
A1= realloc(A1, n*sizeof(int)); // Increasing the size of memory
printf("\nMemory reallocated ");
printf("\nNow enter the elements of araay");
for(i=0; i<n; i++)
        {
          scanf("\n%d", &A1[i]);
         }
for(i=0; i<n; i++)
  {
    printf("  %d", *(A1+i));
   }
free(A1);

    return 0;
}
