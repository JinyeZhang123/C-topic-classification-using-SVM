ipair operator+(const ipair &a, const ipair &b)
{
    return ipair(a.first + b.first, a.second + b.second);
}