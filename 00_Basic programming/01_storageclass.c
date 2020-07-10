//1. Demonstrate all the storage class
#include <stdio.h>
#include <stdlib.h>
void test1()
{ auto int k; //local variable
 printf("k= %d\n", k);
 k=20;
 printf("k= %d\n", k);
}

void test2()
{
    static int var; //var is local variable
    printf("var= %d\n", var); //initial value will be 0
    var++;
    printf("var= %d\n", var);
}

void test3()
{
    extern int gVar;
    printf("gVar=%d\n", gVar);
    gVar=20;
}
void test4()
{
    register int count;
    printf("count= %d\n", count); //some random value;
    count=10;
    printf("count= %d\n", count);
}

int gVar;  //Global Variable
int main()
{  test1();
   test2(); //var =1
   test2();// var=2
   test3();
   printf("gVar=%d\n", gVar);
   gVar= 10;
   printf("gVar= %d\n", gVar);
   test4();
    return 0;
}
