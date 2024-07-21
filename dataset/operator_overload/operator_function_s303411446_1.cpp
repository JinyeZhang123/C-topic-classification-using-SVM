bool operator<(const Arc &e, const Arc &f) {
    if (e.capacity != f.capacity) {
        return e.capacity > f.capacity;
    }