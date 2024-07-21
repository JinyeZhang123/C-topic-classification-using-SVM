Matrix operator^(Matrix base, long long expo)
{
    Matrix t = Matrix::Identity(base.size());
    for (; expo > 0; expo >>= 1) {
        if (expo & 1) t = t * base;
        base = base * base;
    }