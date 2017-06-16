#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // setfill, setw
  cout << setfill('-') << setw(5) << "" << setfill(' ')<<endl;
  
  // setw on cin limits number of characters read from buffer
  // for example here, cin will only take 9 characters(1 left for null terminator) from user
  //char buf[10];
  //cin >> setw(10) >> buf;
  //cout << buf <<endl;
  
  // setprecision
  cout << setprecision(4) << 123.456 << endl;
  
  // uppercase, nouppercase
  cout << uppercase << 12000000.1 <<endl;
  cout << nouppercase << 12000000.1 <<endl;
  
  // boolalpha, noboolalpha
  cout << true << endl;
  cout<< noboolalpha << true <<endl;
  cout <<boolalpha << true << endl;

  // dec, oct, hex
  cout<< dec << 10 << endl;
  cout<< oct << 10 << endl;
  cout<< hex << 10 << endl;
  
  // flags can be used to turn on and off formatting operations
  // setf and unsetf - functions to set and unset flags
  // showpos, dec, hex, oct
  cout.setf(ios::showpos);
  cout.unsetf(ios::hex);  // to unset previously set hex format. see the code a few lines above
  cout.setf(ios::dec);
  cout << 27 << endl;
  
}
