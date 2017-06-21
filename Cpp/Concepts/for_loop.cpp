#include<stdio.h>

// printf returns number of characters printed

/* It's just one by one execution of statements in for loop. 
    a) The initial statement is executed only once. 
    b) The second condition is printed before '*' is printed. The second statement also has short circuiting 
       logical && operator which prints the second part only if 'i' is smaller than 2 b) 
    c) The third (usually increment/decrement)statement is printed after '*' is printed. This also has short 
       circuiting logical && operator which prints the second part only if '++i' is not zero.
*/

int main()
{
    int i = 0;
    for (printf("1st\n"); i < 2 && printf("2nd\n"); ++i && printf("3rd\n"))
    {
        printf("*\n");
    }
    return 0;
}
