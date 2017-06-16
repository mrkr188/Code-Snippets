#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

  char c[12];
  
  // getline function when used with cin 
  // http://www.cplusplus.com/reference/istream/istream/getline/
  // this function is different from grtline(istream&, string&) which is present in <string>
  cin.getline(c,5);
  cout << c << endl;
  
  // getline will set failbit if there are more than 5 characters are given by user
  // if failbit is set further getline operation are not performed
  // so we need to clear the stream before using getline again
  cin.clear();
  
  cin.getline(c,5);
  cout << c <<endl;
  cin.clear();

  // http://www.learncpp.com/cpp-tutorial/132-input-with-istream/
  // another function get() doesnt set failbit, so it can be used without clearing stream
  // but this doesnt read newline, so unexpected things happen
  cin.get(c,5);
  cout << c <<endl;
  cin.get(c,5);
  cout << c <<endl;
  
}
