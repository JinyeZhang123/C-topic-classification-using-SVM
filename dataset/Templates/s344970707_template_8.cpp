template <class T>
class BIT
{
public:
        std::vector<T> array;
        const T n;

        BIT(T n)
                : array(n+1, 0), n(n) {}