P operator+(const P& a, const P& b) {
    return make_pair(a.first + b.first, a.second + b.second);
}