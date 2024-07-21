template <class T> struct StarrySkyTreeMin {

    int N;
    vector<T> node_acc, node_min;
    const T INF = numeric_limits<T>::max() / 2;
  
    StarrySkyTreeMin (int n) {
        N = 2 << (int)log2(n);
        node_acc.resize(N*2,0);
        node_min.resize(N*2,0); 
    }