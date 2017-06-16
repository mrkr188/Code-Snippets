#include <iostream>

using namespace std;
 
int main() {

   int a[10] = {1,2,1,1,1,1,1,1,1,1};
   
   // ra is reference to array a 
   // however ra still doesnt have array size information
   // this expression is more like int* const& ra = (int *)a
   int* const& ra = a;
   
   cout << sizeof(a) << endl;
   cout << sizeof(ra) << endl;
   
   /* http://en.cppreference.com/w/cpp/language/array
   Array-to-pointer decay section - There is an implicit conversion from lvalues and 
   rvalues of array type to rvalues of pointer type: it constructs a pointer to 
   the first element of an array. This conversion is used whenever arrays appear 
   context where arrays are not expected, but pointers are: 
   */
   
   // this will produce an error. cannot assign array to non constant pointer reference
   // here we give array as rvalue. whenever it is given as rvalue it is explicitly converted to pointer of first element
   // array type is also "temporary", that is it is constant. temporary can only be assigned to constant reference
   // http://stackoverflow.com/questions/6827610/when-declaring-a-reference-to-an-array-of-ints-why-must-it-be-a-reference-to-a
   // int* &p = a;
   
   // to get reference to arrray with size information
   int (&array_reference)[10] = a;
   
   cout << sizeof(array_reference) << endl;
   
   return 0;
}
