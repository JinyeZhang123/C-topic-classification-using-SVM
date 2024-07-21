template <class T>
inline void write(T x)
{
    if (x < 0)
    {
        putchar('-');
        x = -x;
    }