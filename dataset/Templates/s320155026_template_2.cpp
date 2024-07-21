template<class T>
bool CRT(T &a0, T &m0, T a[], T m[], int k) {
    T x, y;
    a0 = a[0], m0 = m[0];
    for (int i = 1; i < k; i++) {
        T C = a[i] - a0;
        T g = ExGcd(m0, m[i], x, y);
        if (abs(C) % g != 0) return 0;
        T Mod = m[i] / g;
        x = (mul(x, (C / g), Mod) + Mod) % Mod;
        //这里上面的x*(C/g)在某些特殊情况可能需要改成mul(x,C/g,Mod)
        a0 += m0 * x;  // 余数累加
        m0 *= Mod;     // m0 = m1*m2*...*mk
        if (a0 <= 0)
            a0 += m0;
        else
            a0 %= m0;
    }