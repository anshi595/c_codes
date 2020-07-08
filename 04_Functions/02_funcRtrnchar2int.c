//2. Demonstrate function returning char taking two arguments of int
#include <stdio.h>
#include <stdlib.h>
char func(int a, int b)
{ char c ='Y',  d='N';
    if(a%b==0)
        return c;
    else
        return d;


}
int main()
{ int x, a=18, b=2;
  x=func(a, b);
printf(" IS it divisibile? \n%c", x);


    return 0;
}
