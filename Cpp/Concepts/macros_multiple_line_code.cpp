#include <stdio.h>

// If a macro needs to be expanded in multiple lines, it is the best practice to write those lines 
// within do{ }while(0) to avoid macro side effects. 

// After GeeksQuiz is printed once, the control reaches the while statement to check for the condition. 
// Since, the condition is false, the loop gets terminated.

#define PRINT(i, limit) do \
                        { \
                            if (i++ < limit) \
                            { \
                                printf("GeeksQuiz\n"); \
                                continue; \
                            } \
                        }while(0)
 
int main()
{
    int i = 0;
    PRINT(i, 3);
    return 0;
}
