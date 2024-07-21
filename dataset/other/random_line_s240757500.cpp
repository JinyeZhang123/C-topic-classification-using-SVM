S mapping(F f, S x) { return f == id() ? x : S{(x.b - 1) / 9 * f, x.b}; }
