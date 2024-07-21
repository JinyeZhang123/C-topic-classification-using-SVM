template <unsigned T>
bool nextBitset(bitset<T> &bs, int digit)
{
    if(bs.none())
        return false;
    bitset<T> x, y, z;
    x = bs.to_ulong() & (~(bs.to_ulong()) + 1ULL);
    y = bs.to_ulong() + x.to_ulong() + 0ULL;
    z = bs & ~y;
    if(bs[digit-1] && bs == z)
        return false;
    bs = ((z.to_ulong() / x.to_ulong()) >> 1) + 0ULL;
    bs |= y;
    return true;
}