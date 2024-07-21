template <typename T, bool directed>
class Dinic
{
public:
  Dinic(int n) : n(n), capacity(n, vector<T>(n)), edges(n) {}