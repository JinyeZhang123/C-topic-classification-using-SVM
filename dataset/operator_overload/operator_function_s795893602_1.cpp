bool operator<(const Point& a, const Point& b) {
        return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
    }