#include <stdio.h>
int main()
{

int i, N=10, x=2;
while(N)
{
    for(i=2; i<x; i++)
    {
        if(x%i==0)
            break;

    }
    if(i==x)
    {
        printf("%d  ", x);
        N--;
    }
    x++;
}

    return 0;
}
