template <typename T>
pair<vector<int>, int> scc(vector< vector< Edge<T> > > &G) {
    int n = G.size();

    // ????????°??????
    vector< vector< Edge<T> > > rG(n);
    for(int i=0; i<n; i++) for(int j=0; j<G[i].size(); j++)
        rG[ G[i][j].to ].push_back(Edge<T>(i, G[i][j].cost));

    vector<bool> isthrough(n, false);
    vector<int> vs, cmp(n);
    // 1?????????DFS
    for(int i=0; i<n; i++)
        if(!isthrough[i]) SCC_dfsone(G, i, vs, isthrough);

    fill(isthrough.begin(), isthrough.end(), false);
    reverse(vs.begin(), vs.end());
    int k = 0;

    // 2?????????DFS
    for(int i=0; i<vs.size(); i++)
        if(!isthrough[vs[i]]) SCC_dfstwo(rG, vs[i], cmp, k++, isthrough);
    return make_pair(cmp, k);
}