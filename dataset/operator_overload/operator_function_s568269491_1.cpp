bool operator<(const Elem &a, const Elem &b) {
    if(a.ef != b.ef) return a.ef > b.ef;
    return a.s < b.s;
}