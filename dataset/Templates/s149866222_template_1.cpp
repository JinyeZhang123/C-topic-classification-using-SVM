template <class T>
T gcd(T a, T b)
{
    /*
    if (a%b)return b;
    else return (b, a%b);
    */
    while (b > 0)
    {
        a = a%b;
        a ^= b;
        b ^= a;
        a ^= b;
    }