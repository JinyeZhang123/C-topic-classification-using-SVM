template <unsigned H , unsigned W>
auto at (char (& a) [H] [W] , unsigned x , unsigned y) -> bool
{
    if (0 <= x && x < W && 0 <= y && y < H)
    {
        return a [y] [x] == '1';
    }