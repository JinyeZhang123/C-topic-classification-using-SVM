template <typename T>
class segmenttree
{
private:
    using F = function<T(T, T)>;
    int n;
    T dif;
    F f;
    vector<T> st;

    T query_(int a, int b, int k, int l, int r)
    {
        if (r <= a || b <= l)
        {
            return dif;
        }