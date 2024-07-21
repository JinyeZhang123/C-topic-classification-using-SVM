template <typename T>
void read(T& x)
{
    char ch = getchar();
    for (; !isdigit(ch); ch = getchar());
    for (x = 0; isdigit(ch); x = x * 10 + (ch ^ 48), ch = getchar());
}