//WAP to fing the range of unsigned and signed char
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 void signedrange( int N)
 {  int lower=pow(-2, N-1);
    int upper=pow(2,N-1);
    printf("The range of signed char is %d to %d \n", lower, upper);
 }
 void unsignedrange(int N)
 {
     int lower= pow(2, N-1);
     int upper= pow(2, N-1)-1;
     printf("The range of unsigned char is %d to %d\n ", lower, upper);
 }
int main()
{
   int N=sizeof(char)*8;
   signedrange(N);
   unsignedrange(N);


    return 0;
}
