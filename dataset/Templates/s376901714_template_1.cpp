template <typename T>
inline void readin(T &x) {
    x = 0;
    T fh = 1;
    char ch = getchar();
    for (; !isdigit(ch); ch = getchar()) if (ch == '-') fh = -1;
    for (; isdigit(ch); ch = getchar()) x = (x << 1) + (x << 3) + (ch ^ 48);
    x *= fh;
}