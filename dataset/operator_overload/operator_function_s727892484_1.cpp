bool operator<(const Point &a, const Point &b) {
    if (sgn(a.real() - b.real()))
        return sgn(a.real() - b.real()) < 0;
    return sgn(a.imag() - b.imag()) < 0;
}