class Point
{
public:
    double x, y;
    double length(const Point& p) const{
        return sqrt(pow(x - p.x, 2.0) + pow(y - p.y, 2.0));
    }                                                       