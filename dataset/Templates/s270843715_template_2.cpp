template <typename T>
struct Flow {
    vector< vector< Edge<T> > > G;
    int n;
    vector<bool> used;
    Flow(int _n) : G(_n), n(_n), used(_n, false) {}