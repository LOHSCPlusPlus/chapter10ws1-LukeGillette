#include "Point.h"

class Line{
  public:
  Line();
  double lineLength();
  void print();
  Line(Point s,Point e);
  private:
  Point start;
  Point end;

};

