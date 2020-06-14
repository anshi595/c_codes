#include <stdio.h>
#include <stdlib.h>
//WAP to set n no bits from given position
int  set_bit(int no, int y, int i)
{   int x;
    for(x=y-1; x<(y-1+i); x++)
     {
        no = no | (1<<x);
        }
        return    no;

}
int main()

{ int i , y, n;
printf("Enter the no:  ");
scanf("%d", &n);
printf("Enter the starting bit no to set:  ");
scanf("%d", &y);
printf("Enter the no for total bit to set:  ");
scanf("%d", &i);
printf("   %d",   set_bit(n, y, i));
return 0;
}
