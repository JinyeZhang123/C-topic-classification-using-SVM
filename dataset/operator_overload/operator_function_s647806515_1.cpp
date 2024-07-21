State operator+(const State& a, const State& b) {
    return { a.b+b.b, a.w+b.w, a.empty+b.empty }