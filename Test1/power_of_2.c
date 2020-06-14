#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
printf("Enter the no : ");
scanf("%d", &n);
if((n & (n-1))==0)
    {
        printf("The no is power of 2");
        }
    else
        printf("Oops, not  a power of 2 ");


    return 0;
}
