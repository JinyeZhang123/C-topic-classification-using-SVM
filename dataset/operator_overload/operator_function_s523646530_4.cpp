Point operator*(const Point &lhs, const Point &rhs) {
    return { lhs.x * rhs.x - lhs.y * rhs.y, lhs.x * rhs.y + lhs.y * rhs.x }