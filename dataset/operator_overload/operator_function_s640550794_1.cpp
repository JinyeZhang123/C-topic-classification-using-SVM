M operator*(M &b)
    {
        M res(m.size(), b[0].size());
        for (int r = 0; r < res.m.size(); r++)
            for (int c = 0; c < res[0].size(); c++)
                for (int j = 0; j < m[0].size(); j++)
                    res[r][c] = (res[r][c] + (m[r][j] * b[j][c]) % mod) % mod;
        return res;
    }