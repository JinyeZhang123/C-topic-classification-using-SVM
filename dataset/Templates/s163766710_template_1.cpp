template <typename T>
class LowestCommonAncestor
{
  public:
    static const int MAX_LOG_V = 30;
    static const int NONE_NODE = -1;
    vector<int> parents[MAX_LOG_V]; // follow parents 2^k times node index (ex parents[k][v] start v follow parents 2^k times)
    vector<int> depths;             //the depth from root.
    T edges;
    void dfs(int pos, int pre, int depth = 0)
    {
        parents[0][pos] = pre;
        depths[pos] = depth;
        for (const auto &nxt : edges[pos])
        {
            if (nxt != pre)
            {
                dfs(nxt, pos, depth + 1);
            }