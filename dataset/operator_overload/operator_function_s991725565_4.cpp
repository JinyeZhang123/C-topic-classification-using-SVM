ban operator/(const ban& a, const ban& b)
{
    return a * ast(b, M - 2);
}