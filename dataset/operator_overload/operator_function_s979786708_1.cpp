Poly operator+(const Poly &a, const Poly &b) {
    Poly ret(std::max(a.size(), b.size()));
    for (int i = 0; i < a.size(); i++) ret[i] = a[i];
    for (int i = 0; i < b.size(); i++) ret[i] = (ret[i] + b[i]) % p;
    cut(ret);
    return ret;
}