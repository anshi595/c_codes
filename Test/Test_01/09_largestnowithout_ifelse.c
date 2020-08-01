#include <stdio.h>
#include <stdlib.h>
int maximum(int x, int y)
{
    return (x>y)? x:y;
}
int main()
{ int a, b, z;
 printf("Enter any two no:\n");
 scanf("%d \n%d", &a, &b);
 z=maximum(a, b);
 printf("The maximum no is %d", z);

    return 0;
}
