template<typename G>
struct StronglyConnectedComponents{
    const G &g;
    Graph rg;
    int sz;
    vector<int> comp,order;
    vector<bool> used;
    Graph x;
    int group;

    StronglyConnectedComponents(G &g):g(g),sz(g.size()),rg(g.size()),comp(g.size(),-1),used(g.size(),false){

        for(int i=0;i<sz;i++){
            for(auto e:g[i]){
                rg[e].push_back(i);
            }