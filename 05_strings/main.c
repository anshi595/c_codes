#include <stdio.h>
#include <stdlib.h>
#include "inc\my_str_hdr.h"

int main()
{
     char *str1[150];//string length
     printf("Enter the string: ");
     fgets(str1, 150, stdin);
     printf("The length of string is %d\n", my_strlen(str1));

    char *str2[45];// concatenate the string
    printf("Enter the string to be concatenated:\n");
    fgets( str2, 45, stdin);
    printf("The concatenated string is: %s\n", my_concat(str1, str2));

    char* str3[35]; //replace the character
    printf("Enter the string to replace character:\n");
    fgets( str3, 35, stdin);
    char old, new;
    printf("Enter the character to be replaced:\n");
    scanf(" %c", &old);
    printf("Enter the new character:\n ");
    scanf(" %c", &new);
    printf("The replaced string is : %s\n", replace(str3, old, new));

    my_strcp(str1, str2);//copy the string
    printf("The copied string is:  %s\n", str1);


    char *str4[35]; // squeeze
    fgets(str4, 35, stdin);
    char ch;
    printf("Enter the character to be squeezed:\n");
    scanf( "%c", &ch);
    fflush(stdin);
    printf("After squeezing the string : %s\n", squeeze(str4, ch));

    char *str5[45];
    printf("Enter the string:\n");
    fgets(str5, 45, stdin);
    char *substr[30];
    printf("Enter the substring:\n");
    fgets(substr, 30, stdin);
    findsubstr(str5, substr);


    printallstrings();

    char *str6[45];
    printf("Enter the string to be right rotated:\n");
    fgets(str6, 45, stdin);
    int num= 3;
    printf("The right rotated string is: %s\n", rightrotate(str6, num));


    char *str7[45];
    printf("Enter the string to be left rotated:\n");
    fgets(str7, 45, stdin);
    printf("The left rotated string is: %s\n", leftrotate(str7, num));




    return 0;
}
