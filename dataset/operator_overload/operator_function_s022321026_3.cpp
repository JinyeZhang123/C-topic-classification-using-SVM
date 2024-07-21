P operator*(double k, const P &p) {
    return P(k * p.x, k * p.y);
}