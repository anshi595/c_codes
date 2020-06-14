#include <stdio.h>
#include <stdlib.h>
int dectobin( int n)
{ int i, k;
for( i= sizeof(int)*8 -1; i>=0; i-- )
{  k= n>>i;
   if( (k & 1)== 1 )
    printf("1");
    else
    printf("0");
}

}

unsigned int  leftshift(unsigned  int n, int p)
{ return (n<<p) | (n>>(sizeof(int)*8-1));
}
unsigned int  rightshift(unsigned  int n, int p)
{
    return (n>>p) | (n<<(sizeof(int)*8-1));
}



int main()

{ unsigned int n;
int p;
printf("Enter the no\n");
scanf("%u ", &n);
dectobin(n);
printf("Enter the no of bits to rotated: \n");
scanf("%d ", &p);
unsigned int a= leftshift(n, p);
printf("%d \n", a);
dectobin(a);
unsigned int b=rightshift(n, p);
printf("%d ", b);
dectobin(b);
return 0;
}
