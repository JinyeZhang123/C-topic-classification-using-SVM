bool operator<(const State &e, const State &f)
{
    return e.dist > f.dist;
}