template <typename T , unsigned N>
auto findMax (T (& a) [N]) -> T
{
    auto res = a [0];
    for (auto && elem : a)
    {
        res = std::max (res , elem);
    }