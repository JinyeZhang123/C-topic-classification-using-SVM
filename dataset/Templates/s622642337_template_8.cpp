template <class T>
vector<T> divisor(T x)
{
    vector<T> ans;
    for (T i = 1; i * i <= x; i++)
        if (x % i == 0)
        {
            ans.pb(i);
            if (i * i != x)
                ans.pb(x / i);
        }