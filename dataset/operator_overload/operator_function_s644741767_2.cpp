MAT operator*(const MAT& m1, const MAT& m2)
{
    MAT ret(m1.r, m2.c);
    for (int i = 0; i < m1.r; i++)
        for (int j = 0; j < m1.c; j++)
            if (m1.d[i][j])
                for (int k = 0; k != m2.c; k++)
                    if (m2.d[j][k]) ret.d[i][k] = (ret.d[i][k] + (m1.d[i][j] * m2.d[j][k])) % mod;
    return ret;
}