template<typename T>
struct TreeDiameter{
    vector<T> dp;
    vector<vector<pair<int,T>>> G;
    TreeDiameter(int n):dp(n),G(n){}