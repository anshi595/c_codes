//WAP to count no of pairs in the array whose sum is equal to 30
#include <stdio.h>
#include <stdlib.h>
int countpairsofarrays(int n, int * A, int sum)
{
    int  i, j, count=0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
            if(A[i] + A[j]==sum)
                count++;

    }
    return count;
}
int main()
{int i, n, sum=30;
printf("Enter size of array A: ");
scanf("%d", &n);
int A[n];
printf("Enter the values to filled in array A: ");
for(i=0; i<n; i++)
{
   scanf("%d", &A[i]);

}
printf("The no of pairs present in array is: %d",countpairsofarrays(n, A, sum));
    return 0;
}
