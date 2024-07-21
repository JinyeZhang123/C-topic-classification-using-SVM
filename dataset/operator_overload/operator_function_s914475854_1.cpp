bool operator<(const Point &a, const Point &b){
        return !equals(a.X, b.X) ? a.X < b.X : a.Y < b.Y;
    }