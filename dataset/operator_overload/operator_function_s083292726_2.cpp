bool operator>(const Elem &a, const Elem &b) {
    return a.inc != b.inc ? a.inc > b.inc : a.l < b.l;
}