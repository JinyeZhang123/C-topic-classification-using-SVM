bool operator<(const Cake &a, const Cake &b) {
    return a.w * a.d < b.w * b.d;
}