template<class T>
class SegmentTree {
    using Func = std::function<T(T, T)>;
    private:
        const Func F;
        const T DEF;
        int N;
        std::vector<T> dat;
    public:
        SegmentTree(int n, const Func f, const T def) : F(f), DEF(def) {
            N = 1;
            while (N < n) N *= 2;
            dat.assign(2*N, DEF);
        }