bool operator==(const T3 &lhs, const T3 &rhs)
{
        if (lhs.t0 != rhs.t0) return false;
        if (lhs.t1 != rhs.t1) return false;
        return lhs.t2 == rhs.t2;
}