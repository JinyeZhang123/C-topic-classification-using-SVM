template <int MaxN> class PrimalDual {
        int n = MaxN;
        vector<Edge> g[MaxN];
    public:
        void clear(int n) {
            this->n = n;
            for (int i = 0; i < n; ++i)
                g[i].clear();
        }