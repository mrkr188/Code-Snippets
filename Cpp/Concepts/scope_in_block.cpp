#include <stdio.h>

// here i in main and i in while loop are different.
// so this prints 99 99 99

int main()
{
    int i = 3;
    while (i--)
    {
        int i = 100;
        i--;
        printf("%d ", i);
    }
    return 0;
}
