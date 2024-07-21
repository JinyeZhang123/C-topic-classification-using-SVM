template <typename T>
struct graphLink {
    vector<int> ord, low, parent;
    vector< vector< Edge<T> > > G;
    vector< pair<int, int> > brdgs;
    int cnt, v;

    // init
    graphLink(int _n) : ord(_n, -1), low(_n, 0),
                        parent(_n, -1), G(_n), cnt(0), v(_n) {}