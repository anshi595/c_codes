#include <stdio.h>
//check no is odd or even using bitwise
  char decimal(int);
int main()
{ int x;
scanf("%d", &x);
decimal(x);
return 0;
}

 char decimal( int n)
{ if((n & 1) == 1) // AND operation is done with 1 if n is set it will return 1 which will be odd
    return(printf("odd"));
  else
    return( printf("Even"));

}
