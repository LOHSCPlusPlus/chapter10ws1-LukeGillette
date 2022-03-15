#include "Line.h"
#include <iostream>
using namespace std;


int main() {
  Point x(4,9);
  Point y(4,7);
  Line L(x,y);
  cout << L.lineLength() << endl;
  L.print();
    return 0;
}
