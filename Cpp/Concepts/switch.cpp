# include <stdio.h>

// if switch statement is implemented without break, all conditions before it encounters
// break statement are executed.

// here all a,e,i,o cases are executed and then moved to u statement where breaik is 
// encountered, then "Vowel character" is printed and exits the switch statement

int main(){
    
    int c = 'f';
    switch (c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          printf(" Vowel character");
          break;
        default :
          printf("Not a Vowel character"); 
          break;
    }
    return 0;
}
