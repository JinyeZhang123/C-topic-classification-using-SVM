bool operator<(const point_t l, const point_t r) {
        return (l.real() != r.real() ? l.real() < r.real() : l.imag() < r.imag());
    }