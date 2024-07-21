namespace std {
    istream &operator>>(istream &is, Point2D &p) {
        is >> p.x >> p.y;
        return is;
    }