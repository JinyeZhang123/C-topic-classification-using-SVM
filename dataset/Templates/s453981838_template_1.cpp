template<typename FLOWTYPE, typename COSTTYPE> class FlowGraph{
    public:
    typedef struct Edge{
        ll id, from, fp, to, tp;
        FLOWTYPE cap, icap;
        COSTTYPE cost;
        Edge(ll from, ll fp, ll to, ll tp, FLOWTYPE cap, COSTTYPE cost, ll id=-1)
                : id(id), from(from), fp(fp), to(to), tp(tp), cap(cap), icap(cap), cost(cost){}