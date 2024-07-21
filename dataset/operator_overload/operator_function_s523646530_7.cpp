bool operator<(const Point &lhs, const Point &rhs) {
    auto s = sgn(lhs.x - rhs.x);
    return s ? s < 0 : sgn(lhs.y - rhs.y) < 0;
}