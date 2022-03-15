#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(){
}

Line::Line(Point s,Point e){
  start = s;
  end = e;
}
double Line::lineLength(){
  double length = start.calcDistance(end);
  return length;
}

void Line::print(){
  cout << "s: ";
  start.print();
  cout << "e: ";
  end.print();
  cout << endl;
}
