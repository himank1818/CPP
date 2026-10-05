#include <iostream>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length()<<"\n";


  string txxt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txxt.size()<<"\n";
  return 0;
}


// size() and length() are equivalent. Both return the number of characters in a string.


