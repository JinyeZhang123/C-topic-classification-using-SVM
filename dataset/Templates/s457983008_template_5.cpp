template<class T> inline void Scan(T& x) { //int, LL
    char c;
    for (c = getchar(); c <= ' '; c = getchar()) ;
    bool ngt(c == '-');
    if (ngt) c = getchar();
    for (x = 0; c > ' '; c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    if (ngt) x = -x;
}