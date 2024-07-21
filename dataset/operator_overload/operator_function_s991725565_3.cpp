ban operator*(const ban& a, const ban& b)
{
    return ban(a.x * b.x);
}