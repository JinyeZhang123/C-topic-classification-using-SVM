MAT operator+(const MAT& m1, const MAT& m2)
{
    MAT ret(m1.r, m2.c);

    for (int i = 0; i < m1.r; i++)
        for (int j = 0; j < m1.c; j++) ret.d[i][j] = (m1.d[i][j] + m2.d[i][j]) % mod;
    return ret;
}