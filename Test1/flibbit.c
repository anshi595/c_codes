#include <stdio.h>
#include <stdlib.h>
void dectobin( int n)
{ int i, k;
for( i= sizeof(int)*8 -1; i>=0; i-- )//i will start from 31
{  k= n>>i;     //right shifting and saving in k
   if( (k & 1)== 1 )   //masking with 1 doing and operation
    printf("1");
    else
    printf("0");
} printf("\n ");
}
int main()
{ int i, a;
printf("Enter the no to be flipped: ");
scanf(" %d", &i);
dectobin(i);
a=~i;
printf("The flipped no is %d \n", a);
dectobin(a);
    return 0;
}
