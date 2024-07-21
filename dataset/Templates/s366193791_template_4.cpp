template<typename T>
struct BIT{
    private:
        using Func = function<T(T, T)>;

        int n;
        vector<T> node;

        T init_v;
        Func func;

    public:

        BIT(vector<T> a, Func _func, T _init_v) {
            n = a.size() + 1;
            init_v = _init_v;
            func = _func;

            node.resize(n, init_v);
            for(int i=1; i<n; i++) if((i+(i&-i)) < n) node[i+(i&-i)] = func(node[i+(i&-i)], node[i]);
        }