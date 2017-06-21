#include <stdio.h>

// printf("Outside "); doesnt get executed. Its almost like a comment. 
// in switch, control directly moves to cases

// other things to mind in switch statements are
// 1) cases can only have int, char, enum values
// 2) cases cant have same values

int main()
{
    int i = 3;
    switch(i)
    {
        printf("Outside ");
        case 1: printf("Geeks");
            break;
        case 2: printf("Quiz");
            break;
        default: printf("GeeksQuiz");
    }
    return 0;
}
