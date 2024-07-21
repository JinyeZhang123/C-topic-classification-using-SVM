template <typename T>
class Prim {
private:
    int n;
    vector<vector<edge<T>>> G;
public:
    Prim(int _n) : n(_n) {
        G.resize(n);
    }