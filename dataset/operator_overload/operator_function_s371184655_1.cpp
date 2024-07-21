bool operator<(const Points &x, const Points &y) {
    return x.dist > y.dist;
}