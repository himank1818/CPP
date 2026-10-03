#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x == y)<<"\n";         // returns 0 (false) because 5 is not equal to 3


  int a = 5;
  int b = 3;
  cout << (a != b)<<"\n";        // returns 1 (true) because 5 is not equal to 3


   int c = 5;
  int d = 3;
  cout << (c > d)<<"\n";         // returns 1 (true) because 5 is greater than 3


  int e = 5;
  int f = 3;
  cout << (e >= f)<<"\n";        // returns 1 (true) because 5 is greater, or equal, to 3




  int g = 5;
  int h = 3;
  cout << (g <= h)<<"\n";        // returns 0 (false) because 5 is neither less than nor equal to 3

  return 0;
}
