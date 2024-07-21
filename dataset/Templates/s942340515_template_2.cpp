template <typename T>
struct TreeLCA {
public:
    int const MAX_LOG_V;
    vector< vector< Edge<T> > > G;
    int root, vn;
    vector< vector<int> > parent;
    vector<int> depth;

    // constructor (Graph, root)
    TreeLCA(vector< vector< Edge<T> > > _G, int _r) : 
        MAX_LOG_V(35), G(_G), root(_r), vn(G.size()), 
        parent(MAX_LOG_V, vector<int>(vn, 0)), depth(vn, 0)
        { init(vn); }