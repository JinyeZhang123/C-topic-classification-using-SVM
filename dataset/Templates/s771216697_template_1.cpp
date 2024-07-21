template <typename T>
auto unwords (const T & xs) -> std::string
{
    auto begin = xs.begin ();
    auto end = xs.end ();
    std::ostringstream ss;
    for (auto ite = begin; ite != end; ++ ite)
    {
        ss << * ite;
        if (ite + 1 < end)
        {
            ss << ' ';
        }