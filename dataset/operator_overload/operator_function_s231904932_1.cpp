bool operator<(const Point a, const Point b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }