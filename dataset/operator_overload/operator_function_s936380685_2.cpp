vec operator*(const Matrix &m, const vec &v) {
    vec res(v.size());
    rep(i, v.size()) rep(j, m.at(0).size()) {
        res.at(i) += m.at(i).at(j) * v.at(j);
        res.at(i) %= M;
    }