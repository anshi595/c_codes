#include <stdio.h>
#include <stdlib.h>
int  swap_no(int n)
{
    int rem, rn=0;
    while(n!=0)
    {  rem=n%10;
       n=n/10;
       rn= rn * 10 + rem;
        }
        return rn;
}

int main()
{ int i, a;
printf("entter the no o be reversed: ");
scanf("%d", &i);
a=swap_no(i);
printf("The reversed no is %d", a);

    return 0;
}
