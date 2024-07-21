template<typename T>
struct Dijkstra{
    const T inf=numeric_limits<T>::max();
    using P=pair<T,int>;
    int n;
    vector<vector<pair<int,T>>> G;
    vector<T> d;
    vector<int> prev;
    vector<long long> cnt;
    Dijkstra(int n):n(n),G(n),d(n),prev(n),cnt(n){}