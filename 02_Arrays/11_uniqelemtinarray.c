#include <stdio.h>
#include <stdlib.h>
int uniqelemtinarray(int *A, int n)
{
    int i, j, count;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]==A[j])
                count=1;
             else
                 count=0;
        }
    }
    if(count==1)
        printf("No not unique elements");
    else
        printf("Yes, all unique elements");



}



int main()
{int i, n;
printf("Enter size of  array : ");
scanf("%d", &n);
int A[n];
printf("Enter the values to filled in array A: ");
for(i=0; i<n; i++)
{
   scanf("%d", &A[i]);

}
uniqelemtinarray( A, n);

    return 0;
}


