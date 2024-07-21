template <typename Iterator>
auto findMaximumSum (Iterator begin , Iterator end) -> long long
{
    long long res = * begin;
    auto tmp = res;
    for (auto ite = begin + 1; ite != end; ++ ite)
    {
        tmp += * ite;
        res = std::max (res , tmp);
    }