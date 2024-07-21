template<class T>
struct LazySegment
{
    vector<T> node;
    vector<T> lazy;
    vector<bool> lazyFlag;
    int n;
    T init;

    int left(int i)
    {
        return 2 * i + 1;
    }