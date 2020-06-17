#include <stdio.h>
#include <stdlib.h>
int  arrayissubset(int *A, int *B, int n, int m)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(A[i]==B[j])
                break;
        }

        if(j==m)

             return 0;
        else
            return 1;
    }
}

int main()
{int i, n, m;
printf("Enter size of  array A: ");
scanf("%d", &n);
int A[n];
printf("Enter size of another array B: ");
scanf("%d", &m);
int B[m];

printf("Enter the values to filled in array A: ");
for(i=0; i<n; i++)
{
   scanf("%d", &A[i]);

}
printf("Enter the values to filled in array B: ");
for(i=0; i<n; i++)
{
   scanf("%d", &B[i]);

}
if(arrayissubset( &A, &B, n, m))
 printf("A is subset of B");
else
    printf("A is not subset of B");

    return 0;
}
