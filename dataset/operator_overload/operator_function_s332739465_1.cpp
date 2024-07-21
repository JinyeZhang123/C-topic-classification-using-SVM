Vector operator*(Matrix &a, Vector &b) {
    Vector c(a.size());
    for (size_t i=0; i<a.size(); ++i)
        for (size_t j=0; j<a[i].size(); ++j)
            c[i] += a[i][j]*b[j];

    return c;
}