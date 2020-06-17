#include <stdio.h>
#include <stdlib.h>
void isprime(int n)
{int i, j, count=0;
for(i=2; i<=n/2; i++)
{
    if(n%2==0)
    {
        count=1;
        break;
    }
}  if(n==1)
{
    printf("1 is not prime");

}
else {
    if(count==0)
        return printf("  %d is a prime no \n", n);
    else
        return printf("  %d is not a prime no\n", n);
}
}



int main()
{ int i, n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the values to filled in array: ");
for(i=0; i<n; i++)
{
   scanf("%d", &arr[i]);

}
for(i=0; i<n; i++)
{
    isprime(arr[i]);
}
    return 0;
}
