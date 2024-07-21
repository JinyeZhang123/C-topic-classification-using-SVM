template <class SignedInteger>
unsigned long long gcd_extended(unsigned long long a, unsigned long long b, SignedInteger &x, SignedInteger &y)
{
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }