#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char mystring[100];
   char mystring1[100];
   int c;

    fgets(mystring , 100, stdin);
    puts(mystring);

    gets(mystring1);
    puts(mystring1);

    do {
    c=getchar();
    putchar (c);
    } while (c != '.');

    do {
    c=getc(stdin);
    putchar (c);
    } while (c != '.');

   return 0;
}
