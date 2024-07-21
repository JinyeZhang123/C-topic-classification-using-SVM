template<typename FLOWTYPE> class Dinic{ // 最大流
    public:
    FlowGraph<FLOWTYPE,ll> G;
    std::vector<ll> level, iter;
    Dinic(FlowGraph<FLOWTYPE,ll> G) : G(G){}