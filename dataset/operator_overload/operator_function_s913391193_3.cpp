P operator/(const P& a, double b) {
    return make_pair(a.first / b, a.second / b);
}