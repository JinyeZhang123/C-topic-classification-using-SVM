bool operator==(const T4 &lhs, const T4 &rhs)
{
        if (lhs.t0 != rhs.t0) return false;
        if (lhs.t1 != rhs.t1) return false;
        if (lhs.t2 != rhs.t2) return false;
        return lhs.t3 == rhs.t3;
}