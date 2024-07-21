template<class Abel> struct weightedUnionFind{
    vector<int> par;
    vector<int> rank;
    vector<Abel> diff_weight;

    weightedUnionFind(int n = 1, Abel SUM_UNITY = 0){
        init(n, SUM_UNITY);
    }