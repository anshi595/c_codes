//WAP to find the missing integer in the given array having values from 20 to 30
#include <stdio.h>
#include <stdlib.h>
 int findmissing( int *arr)
 {
     int i, x, sum1=0, sum2=0;

     for(i=20; i<=30; i++)
     {
        sum1=sum1+i;
     }


     for(i=0; i<10; i++)
        {
            sum2=sum2 + arr[i];
        }

x= sum1-sum2;
return x;
}


int main()

{ int i, x=0;
int arr[10];
printf("Enter the values to filled in array: ");
for(i=0; i<10; i++)
{
   scanf("%d", &arr[i]);

}
x= findmissing(arr);
printf("The missing no is %d", x);


}
