#include <stdio.h>

#include <stdio.h>

// printf("Outside "); doesnt get executed. Its almost like a comment. 
// in switch, control directly moves to cases

// other things to mind in switch statements are
// 1) cases can only have int, char, enum values
// 2) cases cant have same values
// 3) case values must be constant. for example if we define int arr[] = {1,2,3}; and 
//    use arr[0], arr[1], arr[2] as case values it gives compile time error: case label 
//    does not reduce to an integer constant

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
