#include <stdio.h>
#include <stdlib.h>
long getfibterm(int t)
{
    if(t==1 || t==2)
        return 1;
    else
        return getfibterm(t-1)+getfibterm(t-2);
}
int main()
{int t, n;
scanf("%d", &n);
for(t=1; t<=n; t++)
    printf("  %d", getfibterm(t));
    return 0;
}
