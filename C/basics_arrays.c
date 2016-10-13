#include <stdio.h>

int fun(int ptr[]){

  // array ptr[] is passed as a pointer ptr into the function
 
  int x = 20;

  // size of a pointer is printed
  printf("sizeof(ptr) = %d\n", sizeof(ptr));
  printf("*ptr = %d \n", *ptr);

  // ptr now points to array
  ptr[1] = 21;
  printf("%d", arr[1]);


  // Assigning any address to an array variable is not allowed.
  // But here this allowed because ptr is a pointer once its passed into function, not array
  // ptr does not point to array now
  ptr = &x;

  printf("*ptr = %d \n", *ptr);

  return 0;
}

int main(){
  int arr[] = {10, 20, 30, 40, 50, 60};
  fun(arr);
  printf("%d \n", arr[0]);
  printf("%d \n", arr[1]);

  return 0;
}
