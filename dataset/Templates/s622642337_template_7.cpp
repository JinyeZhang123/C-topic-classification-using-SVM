template <typename T>
vi iota(vector<T> &a, bool greater = false)
{
    vi res(a.size());
    iota(all(res), 0);
    sort(all(res), [&](int i, int j) {
        if (greater)
            return a[i] > a[j];
        return a[i] < a[j];
    }