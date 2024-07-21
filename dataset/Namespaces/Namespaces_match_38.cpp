namespace std {
    bool operator<(const P a, const P b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }