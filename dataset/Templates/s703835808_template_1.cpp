template<size_t N>
const bitset<N> operator+(const bitset<N>& lhs, const bitset<N>& rhs)
{
    bitset<N> a(lhs), b(rhs), ret(lhs ^ rhs);

    for (b = (a & b) << 1, a = ret; b.any(); b = (a & b) << 1, a = ret) ret ^= b;

    return ret;
}