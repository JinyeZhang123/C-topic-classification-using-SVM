template<class E>
struct Graph
{
    vector<vector<E> > adj;
    Graph(int N):adj(N){}