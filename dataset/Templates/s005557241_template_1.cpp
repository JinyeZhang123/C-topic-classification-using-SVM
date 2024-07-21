template <typename T , unsigned H , unsigned W>
auto input (T (& a) [H] [W]) -> bool
{
    bool result = static_cast <bool> (std::cin >> a [0] [0]);
    if (! result)
    {
        return false;
    }