class Paper
{
private :
    int data [10] [10];
private :
    static auto isValidX (int x) -> bool
    {
        return 0 <= x && x < 10;
    }                                                         