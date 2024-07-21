template <unsigned H , unsigned W>
auto check (char (& a) [H] [W]) -> char
{
    for (auto y = 0u; y < H; ++ y)
    {
        for (auto x = 0u; x < W; ++ x)
        {
            if (at (a , x , y))
            {
                // ??????????????? -> A,C,E,G
                if (at (a , x + 1 , y))
                {
                    // ??????????????? -> A,G
                    if (at (a , x , y + 1))
                    {
                        // ??????????????????????????? -> A
                        if (at (a , x + 1 , y + 1))
                        {
                            return 'A';
                        }