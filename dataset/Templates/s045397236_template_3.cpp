template<typename T>
struct LowLink{
    const vector<vector<T>> &g;
    int sz;
    vector<int> ord,low;
    vector<bool> used;
    vector<int> articulation;
    vector<pii> bridge;
    int k;

    void dfs(int idx,int par){
        used[idx]=true;
        ord[idx]=k++;
        low[idx]=ord[idx];
        bool is_articulation=false;
        int cnt=0;
        for(auto &e:g[idx]){
            if(!used[e]){
                cnt++;
                dfs(e,idx);
                chmin(low[idx],low[e]);
                if(ord[idx]<low[e]) bridge.emplace_back(minmax(idx,e));
                is_articulation |=(par!=-1 && ord[idx]<=low[e]);
            }