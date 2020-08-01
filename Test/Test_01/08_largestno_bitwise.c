#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
    return x^((x^y)  &  -(x < y));
}

int main()
{
     int a, b;
printf("Enter the two no:\n");
scanf("%d \n %d", &a, &b);
printf("The maximun of two no is : %d", max(a, b));
    return 0;
}
