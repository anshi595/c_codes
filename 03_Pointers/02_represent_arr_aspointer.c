#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
int arr[5]={8, 12, 30, 46, 90};
int *p= arr;    // int *p= &a[0]
printf("The elements of the array is: ");
for(i=0; i<5; i++)
{
    printf("\n%d", *(arr+i)); //  same as a[i], i[a] , *(p+i)
}
    return 0;
}
