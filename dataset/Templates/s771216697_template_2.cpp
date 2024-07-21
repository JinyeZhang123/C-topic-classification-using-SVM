template <typename F , typename T>
auto map (F f , const std::vector <T> & xs) -> std::vector <decltype (f (xs [0]))>
{
    std::vector <decltype (f (xs [0]))> res (xs.size ());
    for (auto i = 0u; i < xs.size (); ++ i)
    {
        res [i] = f (xs [i]);
    }