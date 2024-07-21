template<typename T>
struct SCC {
    int sz, cnt, num;
    vi post, comp;
    vector<pair<int, int>> vp;
    vector<bool> sel;
    Graph<T> revg;

    SCC(int sz): sz(sz) {
        cnt = 0;
        num = 0;
        post.resize(sz, -1);
        comp.resize(sz, -1);
        sel.resize(sz, false);
        revg.resize(sz);
    }