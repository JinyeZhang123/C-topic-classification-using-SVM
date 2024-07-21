template <class T>
class RangeBIT
{
public:
        BIT<T> bit1;
        BIT<T> bit2;

        RangeBIT(T n)
                : bit1(n), bit2(n) {}