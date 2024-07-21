template<class T> struct Graph{
    vector<vector<edge<T>>> G;
    int n;

    Graph(int n_){
        n = n_;
        G.resize(n);
    }