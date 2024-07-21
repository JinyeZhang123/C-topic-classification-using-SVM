template<class graph_t,class cost_t,cost_t INF=INF<cost_t>()>
    bool BellmanFord(int s,graph_t& g,std::vector<cost_t> &d){
        int n=g.size();
        d.assign(n,INF);
        bool update=true;
        d[s]=0;
        for(int loop=0;update;loop++){
            if(loop>=n+1){
                return false;
            }