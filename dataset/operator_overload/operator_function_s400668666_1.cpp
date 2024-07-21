bool operator<(const Sol &x, const Sol &y) {
    bool ok = x.s * (y.w + y.s) < y.s * (x.w + x.s);
    return ok;
}