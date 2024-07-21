bool operator==(const T2 &lhs, const T2 &rhs)
{
        if (lhs.t0 != rhs.t0) return false;
        return lhs.t1 == rhs.t1;
}