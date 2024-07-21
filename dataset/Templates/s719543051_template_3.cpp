template<class T> T power(T a, T b)
{return b ? power(a * a % inf, b / 2) * (b % 2 ? a : 1) % inf : 1;}