M operator*(M &b)
    {
        M c = M();

        f(i,n)
            f(j,n)
                f(k,n)
                    add_self(c.t[i][k], mul(t[i][j], b.t[j][k]));

        return c;
    }