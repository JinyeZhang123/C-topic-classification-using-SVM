template <class dt>
class Solve_Path{
    public:
        //edges[from][to]
        vector<vector<dt>> edges;
        //edges[from][to][id] 多重辺
        vector<vector<vector<dt>>> edges_mul;
        // edges[from][num] = {to, cost}