BitMatrix operator*(BitMatrix A, BitMatrix B)
{
    BitMatrix R(A.H, B.W);
    BitMatrix tB(B.W, B.H);
    for (int i = 0; i < tB.H; ++i)
        for (int j = 0; j < tB.W; ++j)
            tB[i][j] = B[j][i];
    for (int i = 0; i < R.H; ++i)
        for (int j = 0; j < R.W; ++j)
            R[i][j] = ((A[i] & tB[j]).count() & 1);
    return R;
}