template <typename T>
void zip(vector<T> &x)
{
    vector<T> y = x;
    sort(all(y));
    for (int i = 0; i < x.size(); ++i)
    {
        x[i] = lb(y, x[i]);
    }