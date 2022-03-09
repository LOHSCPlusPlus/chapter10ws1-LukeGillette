class Point{
    public:
        Point();
        Point(double xVal, double yVal);
       /* double getX();
        double getY();
        void setX(double xVal);
        void setY(double yVal); */
        double calcDistance(Point other);
void print();
    private:
        double x;
        double y;
};
