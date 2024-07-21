template <typename T>
inline T gi()
{
    T f = 1, x = 0; char c = getchar();
    while (c < '0' || c > '9') {if (c == '-') f = -1; c = getchar();}