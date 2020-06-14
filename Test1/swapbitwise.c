#include <stdio.h>
#include <stdlib.h>
void swapbitwise(int i, int k)
{
    i= i ^ k;
    k= k ^ i;
    i= i ^ k;
    printf("The swapped no is : %d %d ", i, k);
}

int main()
{ int a, b;
printf("Enter the no  to be swapped : ");
scanf("%d  %d",  &a, &b);
swapbitwise(a, b);
    return 0;
}
