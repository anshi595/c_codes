#include <stdio.h>
//WAP to count no of bits flipped to convert A to B
int countbits_flipped(int a, int b)
{
unsigned int count = 0;
unsigned int x = a ^ b;
while(x)
    {
        count = count + (x & 1);
        x >>= 1;
    }

     printf("%d", count);
}
int main()
{ int a=15, b=14;
countbits_flipped(a, b);

return 0;
}
