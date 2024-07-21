template <class T>
inline void read(T &x)
{
    x = 0;
    char c = getchar();
    bool f = 0;
    for (; !isdigit(c); c = getchar())
        f ^= c == '-';
    for (; isdigit(c); c = getchar())
        x = x * 10 + (c ^ 48);
    x = f ? -x : x;
}