template <int N>
struct factorial {
    static const long long int value = N * factorial<N - 1>::value;
}