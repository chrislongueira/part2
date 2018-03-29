#include <iostream>
#include "funcs.h"
using namespace std;

int main(){
  cout << unindent("bad-code.cpp") << endl;
  cout << indent("bad-code.cpp") << endl;

  return 0;
}
