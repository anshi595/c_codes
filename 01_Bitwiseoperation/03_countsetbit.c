#include <stdio.h>
#include <stdlib.h>
//count the no of set bits in n
int setbit( int n)
{
    int i, count=0;
    for(i= 0; i< sizeof(int)*8; i++)// 0 to 31
    {
        if((n & (1 << i)) == ( 1<< i) ) //if masking with 1 gives 1 then it will count as  a set bit
            count++;
    }
    return count;
}

int main()
{ int p, count;
scanf("%d", &p);
count= setbit( p);
printf("No of set bit:  %d", count);

return 0;
}
