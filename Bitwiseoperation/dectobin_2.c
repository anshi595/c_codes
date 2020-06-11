#include <stdio.h>
#include <stdlib.h>
//decimal to binary
int dectobin( int n)
{ int i, k;
for( i= sizeof(int)*8 -1; i>=0; i-- )//i will start from 31
{  k= n>>i;     //right shifting and saving in k
   if( (k & 1)== 1 )   //masking with 1 doing and operation
    printf("1");
    else
    printf("0");
}
}

int main()
{ int x, p;
scanf("%d", &x);
p= dectobin(x);
    return 0;
}
