template<class T> struct edge{
    int from, to; T cost;
    edge(int f, int t, T c){
        from = f; to = t; cost = c;
    }