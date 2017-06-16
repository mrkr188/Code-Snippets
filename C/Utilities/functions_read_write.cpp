// use read() and write() member functions for binary file (file mode of ios::binary), 
// which read/write raw bytes without interpreting the bytes

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
 
int main() {
   string filename = "test.bin";
 
   // Write to File
   ofstream fout(filename.c_str(), ios::out | ios::binary);
   if (!fout.is_open()) {
      cerr << "error: open file for output failed!" << endl;
      abort();
   }
   int i = 1234;
   double d = 12.34;
   fout.write((char *)&i, sizeof(int));
   fout.write((char *)&d, sizeof(double));
   fout.close();
 
   // Read from file
   ifstream fin(filename.c_str(), ios::in | ios::binary);
   if (!fin.is_open()) {
      cerr << "error: open file for input failed!" << endl;
      abort();
   }
   int i_in;
   double d_in;
   fin.read((char *)&i_in, sizeof(int));
   cout << i_in << endl;
   fin.read((char *)&d_in, sizeof(double));
   cout << d_in << endl;
   fin.close();
   return 0;
}