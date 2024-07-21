template <typename T>
struct Graph{
  int n;
  vector<vector<pair<int, T> > > es;
  vector<T> mincost;
  vector<bool> used;
  Graph(int n_){
    n = n_;
    es.resize(n);
    mincost.resize(n);
    used.resize(n);
  }