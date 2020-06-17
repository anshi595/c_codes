//wap to merge two array in third array
#include <stdio.h>
#include <stdlib.h>
void mergetwoaaray( int n, int m, int *A, int *B)
{ int i, j, c[m+n];
for(i=0; i<n; i++)
{
    c[i]=A[i];
}
for(j=0; j<m; j++)
{
    c[n+j]=B[j];
}
printf("The merged array C is : ");
for(i=0; i<m+n; i++)
{
    printf("  %d", c[i]);
}
}




int main()
{
int i, n, m;
printf("Enter size of array A: ");
scanf("%d", &n);
int A[n];
printf("Enter size of array B: ");
scanf("%d", &m);
int B[n];

printf("Enter the values to filled in array A: ");
for(i=0; i<n; i++)
{
   scanf("%d", &A[i]);

}
printf("Enter the values to filled in array B: ");
for(i=0; i<m; i++)
{
   scanf("%d\n", &B[i]);

}
mergetwoaaray( n, m, A, B);

    return 0;
}


