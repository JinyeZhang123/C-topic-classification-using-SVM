Matrix operator*(const Matrix &m1, const Matrix &m2) {
    size_t n = m1.size();
    Matrix res(n, vec(n));
    rep(i, n) rep(j, n) rep(k, n) {
        res.at(i).at(j) += m1.at(i).at(k) * m2.at(k).at(j);
        res.at(i).at(j) %= M;
    }