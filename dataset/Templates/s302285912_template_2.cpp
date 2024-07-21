template<class F>
    void query(const string& S,F& f,int s_id,int node_id){
        for(auto& id:nodes[node_id].accept) f(id);
        if(s_id==S.size()) return ;
        else{
            int c = S[s_id]-margin;
            if(nodes[node_id].ne[c]==-1) return ;
            query(S,f,s_id+1,nodes[node_id].ne[c]);
        }