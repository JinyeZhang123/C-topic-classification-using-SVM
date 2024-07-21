template <class T>
Wgraph<T> getWg(int n, int m = -1, bool directed = false, int margin = 1)
{
    Wgraph<T> res(n);
    if (m == -1)
        m = n - 1;
    while (m--)
    {
        int a, b;
        T c;
        cin >> a >> b >> c;
        a -= margin, b -= margin;
        res[a].emplace_back(b, c);
        if (!directed)
            res[b].emplace_back(a, c);
    }