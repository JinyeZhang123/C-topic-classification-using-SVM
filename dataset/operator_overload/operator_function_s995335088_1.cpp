Matrix operator*(Matrix &a, Matrix &b) {
    Matrix c(a.size(), Vector(b[0].size()));
    for (size_t i=0; i<a.size(); ++i)
        for (size_t j=0; j<b[0].size(); ++j)
            for (size_t k=0; k<b.size(); ++k)
                c[i][j] += a[i][k] * b[k][j];

    return c;
}