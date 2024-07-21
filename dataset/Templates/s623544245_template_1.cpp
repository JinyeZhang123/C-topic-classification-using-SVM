template<class T>
inline void read(T &x) {
    static char ch;
    static bool opt;
    while (!isdigit(ch = getchar()) && ch != '-');
    x = (opt = ch == '-') ? 0 : ch - '0';
    while (isdigit(ch = getchar()))
        x = x * 10 + ch - '0';
    if (opt)
        x = ~x + 1;
}